#include "dialog.h"
#include "ui_dialog.h"
#include <wiringPi.h>
#include <wiringPiI2C.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#define DHTPIN 7
#define MAXT 85 // More than enough, we leave additional space for eventual checking

int dht_dat[5] = {0,0,0,0,0};

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    //Creating and connecting a timer to a main slot
    timer = new QTimer(this);
    connect(timer,&QTimer::timeout,this,&Dialog::update_gui);
    timer->start(1000);

    wiringPiSetup();
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog ::update_gui()
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
    pinMode(DHTPIN,INPUT);

    for(i = 0 ; i < MAXT ; i++)
    {
        counter = 0;
        while(digitalRead(DHTPIN) == last_state)
        {
            counter++;
            if(counter == 255)
            {
                break;
            }
        }
        last_state = digitalRead(DHTPIN);
        if(counter == 255)
            break;

        dht_dat[j/8] <<= 1;
        if(counter > 16)
        {
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

        ui-> label1->setText(QString::number(humidity));
        ui-> label2->setText(QString::number(temperature));

    }
}

