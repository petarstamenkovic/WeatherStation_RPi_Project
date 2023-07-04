#ifndef DIALOG_H
#define DIALOG_H

#include <QTime>
#include <QTimer>
#include <QDialog>
#include <QString>

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
    QTimer *timer3;
    void temperature_humidity_read();
    void rain_detection_read();
    void light_detection_read();
    void start_temperature_humidity_timer();
    void start_rain_detection_timer();
    void start_light_detection_timer();
};
#endif // DIALOG_H
