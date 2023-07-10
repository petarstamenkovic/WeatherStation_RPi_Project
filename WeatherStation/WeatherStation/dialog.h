#ifndef DIALOG_H
#define DIALOG_H

#include <QTime>
#include <QTimer>
#include <QDialog>
#include <QString>
#include <QtCharts>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
    Ui::Dialog *ui;
    QTimer *timer1;
    QTimer *timer2;

    void temperature_humidity_read();
    void forecast_read();
    void start_temperature_humidity_timer();
    void start_forecast_timer();
    QChart *temp_hum_chart;
    QLineSeries *temp;
    QLineSeries *hum;
    QChartView *chartView;
};
#endif // DIALOG_H
