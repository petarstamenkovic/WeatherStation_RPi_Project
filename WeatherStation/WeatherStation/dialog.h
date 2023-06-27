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
    QTimer *timer;
    void update_gui();
};
#endif // DIALOG_H
