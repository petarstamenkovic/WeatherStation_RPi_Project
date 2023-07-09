#include "dialog.h"
#include "ui_dialog.h"
#include <wiringPi.h>
#include <wiringPiI2C.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <QPixmap>


// Decleration of Pins for used sensors
#define DHTPIN 7
#define WATER_SENSOR 2
#define PHOTORESISTOR_PIN 0
#define MAXT 85 // More than enough, we leave additional space for eventual checking

int dht_dat[5] = {0,0,0,0,0};
int fd,light_value;
float t = 0;   // variable for average values and qtcharts series
float sum_t = 0; // variable for summary for temperature
float sum_h = 0; // variable for summary for humidity
// Initialzing the Dialog - constructor
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    //Creating and connecting a timer to a main slot
    timer1 = new QTimer(this);
    connect(timer1,&QTimer::timeout,this,&Dialog::temperature_humidity_read);

   // timer2 = new QTimer(this);
    //connect(timer2,&QTimer::timeout,this,&Dialog::rain_detection_read);

    timer3 = new QTimer(this);
    connect(timer3,&QTimer::timeout,this,&Dialog::light_detection_read);

    wiringPiSetup();

    fd = wiringPiI2CSetup(0x48); // Check the address for my case
    // Connecting the buttons to the timer functions
    connect(ui->temp_hum_button,&QPushButton::clicked,this,&Dialog::start_temperature_humidity_timer);
    //connect(ui->rain_button,&QPushButton::clicked,this,&Dialog::start_rain_detection_timer);
    connect(ui->light_button,&QPushButton::clicked,this,&Dialog::start_light_detection_timer);

    QChart *temp_hum_chart = new QChart();

        temp_hum_chart -> legend() -> setVisible(true);
        temp_hum_chart -> legend() -> setAlignment(Qt::AlignBottom);

        // Temporal axis
    QValueAxis *axisX = new QValueAxis;
        axisX -> setMin(0);
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

    QLineSeries *temp = new QLineSeries;
    QLineSeries *hum  = new QLineSeries;
        temp_hum_chart -> addSeries(temp);
        temp -> setName("Tempearature");
        temp_hum_chart -> addSeries(hum);
        hum -> setName("Humidity");
    QChartView *chartView = new QChartView(temp_hum_chart);
        chartView -> setRenderHint(QPainter::Antialiasing);

    ui -> verticalLayout -> addWidget(chartView);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog ::temperature_humidity_read()
{
    uint8_t last_state = HIGH;
    uint8_t counter = 0;
    uint8_t j = 0;
    uint8_t i;

    dht_dat[0] = dht_dat[1] = dht_dat[2] = dht_dat[3] = dht_dat[4] = 0;

    // DHT11 Communication requests
    // Pull pin down for 18ms (Due to specification)
    pinMode(DHTPIN,OUTPUT);
    digitalWrite(DHTPIN,LOW);
    delay(18);
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
        float humidity = (float)((dht_dat[0] << 8) + dht_dat[1]) / 10;
        if(humidity > 100)
        {
            humidity = dht_dat[0];
        }
        // Read Temperature
        float temperature = (float)(((dht_dat[2] & 0x7F) << 8) + dht_dat[3]) / 10;
        if(temperature > 125)
        {
            temperature = dht_dat[2];
        }
        if(dht_dat[2] & 0x80)
        {
            temperature = -temperature;
        }

        t++;
        sum_t = sum_t + temperature;
        sum_h = sum_h + humidity;
        float avg_t = sum_t/t;
        float avg_h = sum_h/t;

        ui-> label1->setText(QString::number(humidity));
        ui-> label2->setText(QString::number(temperature));
        ui-> average_temp_label -> setText(QString::number(avg_t));
        ui-> average_humidity_label -> setText(QString::number(avg_h));
        temp -> append(t,temperature);
        hum  -> append(t,humidity);
    }



}

/*void Dialog::rain_detection_read()
{
    pinMode(WATER_SENSOR,INPUT);
    int wat_value = digitalRead(WATER_SENSOR);
    if(wat_value == HIGH)
    {
        //std::cout << "Water detected" << std::endl;
        ui-> label_4->setText("Rain is detected");
    }
    else
    {
        //std::cout << "No water detected" << std::endl;
        ui-> label_4->setText("No rain is detected");
    }
}
*/
void Dialog::light_detection_read()
{

    pinMode(WATER_SENSOR,INPUT);
    int wat_value = digitalRead(WATER_SENSOR);
    if(wat_value == HIGH)
    {
        //std::cout << "Water detected" << std::endl;
        ui-> label_4->setText("Rain is detected");
    }
    else
    {
        //std::cout << "No water detected" << std::endl;
        ui-> label_4->setText("No rain is detected");
    }
    /*
    pinMode(PHOTORESISTOR_PIN,INPUT);
    int analog_light_value = analogRead(PHOTORESISTOR_PIN);
    std::cout <<"Anlog value is : " << analog_light_value << std::endl;
    */

    // This part is done by using a YL-40 board that does AD conversion
    // Declare the diodes as outputs and turn them off initially (these are on the DVK board tho)

    light_value = wiringPiI2CReadReg8(fd,0x00);

    if(light_value < 84 && wat_value == HIGH)
    {
        QString imagePath = QDir::homePath() + "/Desktop/RaspberryPiProject/Icons/rainy_moon.png";
        QPixmap pixmap(imagePath);
        ui->forecast_label->setPixmap(pixmap);
        ui->forecast_label->setScaledContents(true);
        ui->forecast_label->setSizePolicy(QSizePolicy::Ignored,QSizePolicy::Ignored);
        std::cout<<"Baby its dark outside.."<<std::endl;
        ui->label_6->setText("Baby its dark outside..");
    }
    else if(light_value < 84 && wat_value == LOW)
    {
        QString imagePath = QDir::homePath() + "/Desktop/RaspberryPiProject/Icons/clear_moon.png";
        QPixmap pixmap(imagePath);
        ui->forecast_label->setPixmap(pixmap);
        ui->forecast_label->setScaledContents(true);
        ui->forecast_label->setSizePolicy(QSizePolicy::Ignored,QSizePolicy::Ignored);
        std::cout<<"Baby its cloudy outside.."<<std::endl;
        ui->label_6->setText("Baby its cloudy outside..");
    }
    else if(light_value < 164 && wat_value == HIGH)
    {
        QString imagePath = QDir::homePath() + "/Desktop/RaspberryPiProject/Icons/rainy_cloudy.png";
        QPixmap pixmap(imagePath);
        ui->forecast_label->setPixmap(pixmap);
        ui->forecast_label->setScaledContents(true);
        ui->forecast_label->setSizePolicy(QSizePolicy::Ignored,QSizePolicy::Ignored);
        std::cout<<"Baby its sunny outside.."<<std::endl;
        ui->label_6->setText("Baby its sunny outside..");
    }
    else if(light_value < 164 && wat_value == LOW)
    {
        QString imagePath = QDir::homePath() + "/Desktop/RaspberryPiProject/Icons/clear_cloudy.png";
        QPixmap pixmap(imagePath);
        ui->forecast_label->setPixmap(pixmap);
        ui->forecast_label->setScaledContents(true);
        ui->forecast_label->setSizePolicy(QSizePolicy::Ignored,QSizePolicy::Ignored);
    }
    else if(light_value < 200 && wat_value == HIGH)
    {
        QString imagePath = QDir::homePath() + "/Desktop/RaspberryPiProject/Icons/rainy_sunny.png";
        QPixmap pixmap(imagePath);
        ui->forecast_label->setPixmap(pixmap);
        ui->forecast_label->setScaledContents(true);
        ui->forecast_label->setSizePolicy(QSizePolicy::Ignored,QSizePolicy::Ignored);
    }
    else
    {
        QString imagePath = QDir::homePath() + "/Desktop/RaspberryPiProject/Icons/clear_sunny.png";
        QPixmap pixmap(imagePath);
        ui->forecast_label->setPixmap(pixmap);
        ui->forecast_label->setScaledContents(true);
        ui->forecast_label->setSizePolicy(QSizePolicy::Ignored,QSizePolicy::Ignored);
    }
}

// Functions that start the timers
void Dialog::start_temperature_humidity_timer()
{
    timer1->start(1000);
}

/*void Dialog::start_rain_detection_timer()
{
    timer2->start(2000);
}
*/
void Dialog::start_light_detection_timer()
{
    timer3->start(1000);
}
