#include "dialog.h"
#include "ui_dialog.h"
#include <wiringPi.h>
#include <wiringPiI2C.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <QPixmap>
#include <QMessageBox>


// Decleration of Pins for used sensors
#define DHTPIN 4
#define WATER_SENSOR 2
#define PHOTORESISTOR_PIN 0
#define MAXT 85 // More than enough, we leave additional space for eventual checking

int dht_dat[5] = {0,0,0,0,0};
int fd,light_value;
float t = 0;   // variable for average values and qtcharts series
// Initialzing the Dialog - constructor
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    //Creating and connecting a timer to a main slot
    timer1 = new QTimer(this);
    connect(timer1,&QTimer::timeout,this,&Dialog::temperature_humidity_read);

    timer2 = new QTimer(this);
    connect(timer2,&QTimer::timeout,this,&Dialog::forecast_read);

    wiringPiSetup();


    fd = wiringPiI2CSetup(0x48); // Check the address for my case
    // Connecting the buttons to the timer functions
    connect(ui->temp_hum_button,&QPushButton::clicked,this,&Dialog::start_temperature_humidity_timer);
    connect(ui->forecast_button,&QPushButton::clicked,this,&Dialog::start_forecast_timer);
    connect(ui->clear_button,&QPushButton::clicked,this,&Dialog::clear_chart);
    connect(ui->clear_forecast_button,&QPushButton::clicked,this,&Dialog::clear_forecast);

    temp_hum_chart = new QChart();
    temp_hum_chart -> setTitle("Temperature and humidity measurments");
    temp_hum_chart -> legend() -> setVisible(true);
    temp_hum_chart -> legend() -> setAlignment(Qt::AlignBottom);

        // Temporal axis
    QValueAxis *axisX = new QValueAxis;
        axisX -> setMin(0);
        axisX -> setMax(100);
        temp_hum_chart -> addAxis(axisX,Qt::AlignBottom);

        // Temperature axis
    QValueAxis *axisYT = new QValueAxis;
        axisYT -> setMin(0);
        axisYT -> setMax(50);
        temp_hum_chart -> addAxis(axisYT,Qt::AlignLeft);

        // Humidity axis
    QValueAxis *axisYH = new QValueAxis;
        axisYH -> setMin(0);
        axisYH -> setMax(100);
        temp_hum_chart -> addAxis(axisYH,Qt::AlignRight);

        temp = new QLineSeries;
        hum  = new QLineSeries;
        temp_hum_chart -> addSeries(temp);
        temp -> setName("Tempearature");
        temp_hum_chart -> addSeries(hum);
        hum -> setName("Humidity");
        temp-> attachAxis(axisX);
        temp-> attachAxis(axisYT);
        hum-> attachAxis(axisX);
        hum-> attachAxis(axisYH);

        chartView = new QChartView(temp_hum_chart);
        chartView -> setRenderHint(QPainter::Antialiasing);

        ui -> verticalLayout -> addWidget(chartView);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog ::temperature_humidity_read()
{
    t = t + 1;
    ui-> time_elapsed_label -> setText(QString::number(t));
    chartView -> chart() -> update();

    //chartView -> update();

    uint8_t last_state = HIGH;
    uint8_t counter = 0;
    uint8_t j = 0;
    uint8_t i;

    dht_dat[0] = dht_dat[1] = dht_dat[2] = dht_dat[3] = dht_dat[4] = 0;

    // DHT11 Communication requests
    // Pull pin down for 18ms (Due to specification)
    pinMode(DHTPIN,OUTPUT);
    digitalWrite(DHTPIN,LOW);
    delay(18);      // THIS CHANGED
    //Prepare to read after 18ms
    digitalWrite(DHTPIN,HIGH);
    delayMicroseconds(40);
    pinMode(DHTPIN,INPUT);

    for(i = 0 ; i < MAXT ; i++)
    {
        counter = 0;
        while(digitalRead(DHTPIN) == last_state)
        {
            counter++;
            delayMicroseconds(1);
            if(counter == 255)
            {
                break;
            }
        }
        last_state = digitalRead(DHTPIN);

        if(counter == 255)
            break;

        if((i >= 4) && (i%2 == 0))
        {
            dht_dat[j/8] <<= 1;
            if(counter > 16)
                dht_dat[j/8] |= 1;

            j++;
        }
    }
    // Checking the check-sum last byte and extracting data
    if((j>=40) && (dht_dat[4] = (dht_dat[0] + dht_dat[1] + dht_dat[2] + dht_dat[3]) & 0xFF))
    {
        // Read Humidity
        int humidity = (int)((dht_dat[0] << 8) + dht_dat[1]) / 10.0;
        if(humidity > 100)
        {
            humidity = dht_dat[0];
        }
        // Read Temperature
        float temperature = (float)(dht_dat[2] + dht_dat[3]/10.0);
        if(temperature > 125)
        {
            temperature = dht_dat[2];
        }
        if(dht_dat[2] & 0x80)
        {
            temperature = -temperature;
        }

        temp -> append(t,temperature);
        hum  -> append(t,humidity);
        chartView -> chart() -> update();
        printf("Temperatura je %f, a vlaznost je %d%% \n" ,temperature,humidity);

        ui-> label1->setText(QString::number(humidity));
        ui-> label2->setText(QString::number(temperature));

    }

}

void Dialog::forecast_read()
{

    pinMode(WATER_SENSOR,INPUT);
    int wat_value = digitalRead(WATER_SENSOR);
    // This if branch is just a testing branch, it should be deleted in the final version
    if(wat_value == HIGH)
    {
        //std::cout << "Water detected" << std::endl;
        ui-> label_4->setText("It's raining men");
    }
    else
    {
        //std::cout << "No water detected" << std::endl;
        ui-> label_4->setText("No rain is detected");
    }

    // This part is done by using a YL-40 board that does AD conversion
    light_value = wiringPiI2CReadReg8(fd,0x00);
    ui -> label_6 -> setText(QString::number(light_value));

    if(light_value < 150 && wat_value == HIGH)
    {
        //QString imagePath = QDir::homePath() + "/Desktop/RaspberryPiProject/Icons/rainy_moon.png";
        //QPixmap pixmap(imagePath);
        QPixmap rainy_sunny(":/new/prefix1/Icons/rainy_sunny.png");
        ui->forecast_label->setPixmap(rainy_sunny);
        ui->forecast_label->setScaledContents(true);
        ui->forecast_label->setSizePolicy(QSizePolicy::Ignored,QSizePolicy::Ignored);
        std::cout<<"Baby its dark outside.."<<std::endl;
        ui->label_6->setText("Baby its sunny outside with some rain..");
    }
    else if(light_value < 150 && wat_value == LOW)
    {
        QPixmap clear_sunny(":/new/prefix1/Icons/clear_sunny.png");
        ui->forecast_label->setPixmap(clear_sunny);
        ui->forecast_label->setScaledContents(true);
        ui->forecast_label->setSizePolicy(QSizePolicy::Ignored,QSizePolicy::Ignored);
        ui->label_6->setText("Baby its sunny outside..");
    }
    else if(light_value < 225 && wat_value == HIGH)
    {
        QPixmap rainy_cloudy(":/new/prefix1/Icons/rainy_cloudy.png");
        ui->forecast_label->setPixmap(rainy_cloudy);
        ui->forecast_label->setScaledContents(true);
        ui->forecast_label->setSizePolicy(QSizePolicy::Ignored,QSizePolicy::Ignored);
        ui->label_6->setText("Baby its cloudy with some rain outside..");
    }
    else if(light_value < 225 && wat_value == LOW)
    {
        QPixmap clear_cloudy(":/new/prefix1/Icons/clear_cloudy.png");
        ui->forecast_label->setPixmap(clear_cloudy);
        ui->forecast_label->setScaledContents(true);
        ui->forecast_label->setSizePolicy(QSizePolicy::Ignored,QSizePolicy::Ignored);
        ui->label_6->setText("Baby its cloudy outside..");
    }
    else if(light_value > 240 && wat_value == HIGH)
    {
        QPixmap rainy_moon(":/new/prefix1/Icons/rainy_moon.png");
        ui->forecast_label->setPixmap(rainy_moon);
        ui->forecast_label->setScaledContents(true);
        ui->forecast_label->setSizePolicy(QSizePolicy::Ignored,QSizePolicy::Ignored);
        ui->label_6->setText("Baby its dark with some rain outside..");
    }
    else
    {
        QPixmap clear_moon(":/new/prefix1/Icons/clear_moon.png");
        ui->forecast_label->setPixmap(clear_moon);
        ui->forecast_label->setScaledContents(true);
        ui->forecast_label->setSizePolicy(QSizePolicy::Ignored,QSizePolicy::Ignored);
        ui->label_6->setText("Baby its dark outside..");
    }
}

void Dialog::clear_chart()
{
    t = 0;
    ui-> time_elapsed_label -> setText("Reset state. ");
    timer1->stop();
    temp -> clear();
    hum -> clear();
    chartView -> update();
    QMessageBox::information(this,"Information","Measurments stopped");
}

void Dialog::clear_forecast()
{
    timer2->stop();
    ui->label_4->setText("Reset state.");
    ui->label_6->setText("Reset state.");
    ui->forecast_label->setText("Reset state.");
    QMessageBox::information(this,"Information","Measurments stopped");
}

// Functions that start the timers
void Dialog::start_temperature_humidity_timer()
{
    timer1->start(1000);
    QMessageBox::information(this,"Information","Measurments for temperature and humidity are on");
}

void Dialog::start_forecast_timer()
{
    timer2->start(1000);
    QMessageBox::information(this,"Information","Weather forecast started");
}
