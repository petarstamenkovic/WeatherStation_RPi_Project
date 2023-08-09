/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *forecast_label;
    QPushButton *clear_button;
    QFrame *line_4;
    QSplitter *splitter;
    QPushButton *temp_hum_button;
    QPushButton *forecast_button;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_9;
    QLabel *time_elapsed_label;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label1;
    QLabel *label2;
    QLabel *label_4;
    QLabel *label_6;
    QPushButton *clear_forecast_button;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(1235, 763);
        Dialog->setStyleSheet(QString::fromUtf8("QDialog\n"
"{\n"
"	border: 2px solid gray;\n"
"	background : rgb(153, 193, 241);\n"
"}"));
        verticalLayoutWidget = new QWidget(Dialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 190, 871, 521));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        forecast_label = new QLabel(Dialog);
        forecast_label->setObjectName(QString::fromUtf8("forecast_label"));
        forecast_label->setGeometry(QRect(900, 10, 301, 161));
        clear_button = new QPushButton(Dialog);
        clear_button->setObjectName(QString::fromUtf8("clear_button"));
        clear_button->setGeometry(QRect(900, 440, 311, 91));
        clear_button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border: 2px solid gray;\n"
"	background : rgb(246, 211, 45);\n"
"}"));
        line_4 = new QFrame(Dialog);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(70, 30, 371, 151));
        line_4->setStyleSheet(QString::fromUtf8("Line\n"
"{\n"
"	border: 1px solid gray;\n"
"	background : rgb(51, 209, 122);\n"
"}"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        splitter = new QSplitter(Dialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(460, 30, 221, 151));
        splitter->setOrientation(Qt::Vertical);
        temp_hum_button = new QPushButton(splitter);
        temp_hum_button->setObjectName(QString::fromUtf8("temp_hum_button"));
        QFont font;
        font.setItalic(true);
        temp_hum_button->setFont(font);
        temp_hum_button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border: 2px solid gray;\n"
"	background : rgb(246, 211, 45);\n"
"}"));
        splitter->addWidget(temp_hum_button);
        forecast_button = new QPushButton(splitter);
        forecast_button->setObjectName(QString::fromUtf8("forecast_button"));
        forecast_button->setFont(font);
        forecast_button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border: 2px solid gray;\n"
"	background : rgb(246, 211, 45);\n"
"}"));
        splitter->addWidget(forecast_button);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 720, 169, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout->addWidget(label_9);

        time_elapsed_label = new QLabel(layoutWidget);
        time_elapsed_label->setObjectName(QString::fromUtf8("time_elapsed_label"));

        horizontalLayout->addWidget(time_elapsed_label);

        layoutWidget1 = new QWidget(Dialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(100, 47, 115, 121));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        layoutWidget2 = new QWidget(Dialog);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(227, 47, 201, 121));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label1 = new QLabel(layoutWidget2);
        label1->setObjectName(QString::fromUtf8("label1"));

        verticalLayout_3->addWidget(label1);

        label2 = new QLabel(layoutWidget2);
        label2->setObjectName(QString::fromUtf8("label2"));

        verticalLayout_3->addWidget(label2);

        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_3->addWidget(label_4);

        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_3->addWidget(label_6);

        clear_forecast_button = new QPushButton(Dialog);
        clear_forecast_button->setObjectName(QString::fromUtf8("clear_forecast_button"));
        clear_forecast_button->setGeometry(QRect(900, 540, 311, 91));
        clear_forecast_button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border: 2px solid gray;\n"
"	background : rgb(246, 211, 45);\n"
"}"));
        line_4->raise();
        splitter->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        verticalLayoutWidget->raise();
        forecast_label->raise();
        clear_button->raise();
        clear_forecast_button->raise();
        QWidget::setTabOrder(temp_hum_button, forecast_button);
        QWidget::setTabOrder(forecast_button, clear_button);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        forecast_label->setText(QCoreApplication::translate("Dialog", "current_weather", nullptr));
        clear_button->setText(QCoreApplication::translate("Dialog", "Reset Temperature and \n"
"Humidity measurments", nullptr));
        temp_hum_button->setText(QCoreApplication::translate("Dialog", "Temperature and humidity", nullptr));
        forecast_button->setText(QCoreApplication::translate("Dialog", "Weather Forecast", nullptr));
        label_9->setText(QCoreApplication::translate("Dialog", "Time elapsed:", nullptr));
        time_elapsed_label->setText(QCoreApplication::translate("Dialog", "null", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Humidity:", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Temperature:", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Rain detection:", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "Light detection: ", nullptr));
        label1->setText(QCoreApplication::translate("Dialog", "null", nullptr));
        label2->setText(QCoreApplication::translate("Dialog", "null", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "null", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "null", nullptr));
        clear_forecast_button->setText(QCoreApplication::translate("Dialog", "Reset forecast reading", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
