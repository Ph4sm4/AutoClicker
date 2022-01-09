/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_8;
    QWidget *clickIntervalWidget;
    QVBoxLayout *verticalLayout;
    QLabel *clickIntervalLabel;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit_4;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_10;
    QWidget *clickOptionsWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QSpacerItem *horizontalSpacer_7;
    QWidget *clickReapetWidget;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton;
    QSpinBox *spinBox;
    QLabel *label_9;
    QRadioButton *radioButton_2;
    QWidget *cursorPositionWidget_2;
    QVBoxLayout *cursorPositionWidget;
    QLabel *label_10;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_8;
    QRadioButton *radioButton_3;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *radioButton_4;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_11;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_12;
    QLineEdit *lineEdit_6;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *start;
    QPushButton *stop;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *settings;
    QPushButton *getPos;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(629, 454);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_8 = new QVBoxLayout(centralwidget);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        clickIntervalWidget = new QWidget(centralwidget);
        clickIntervalWidget->setObjectName(QString::fromUtf8("clickIntervalWidget"));
        verticalLayout = new QVBoxLayout(clickIntervalWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        clickIntervalLabel = new QLabel(clickIntervalWidget);
        clickIntervalLabel->setObjectName(QString::fromUtf8("clickIntervalLabel"));
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        clickIntervalLabel->setFont(font);

        verticalLayout->addWidget(clickIntervalLabel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit = new QLineEdit(clickIntervalWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        label = new QLabel(clickIntervalWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setItalic(true);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lineEdit_2 = new QLineEdit(clickIntervalWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);

        label_2 = new QLabel(clickIntervalWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        lineEdit_3 = new QLineEdit(clickIntervalWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout->addWidget(lineEdit_3);

        label_3 = new QLabel(clickIntervalWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        horizontalLayout->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        lineEdit_4 = new QLineEdit(clickIntervalWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout->addWidget(lineEdit_4);

        label_4 = new QLabel(clickIntervalWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        horizontalLayout->addWidget(label_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_8->addWidget(clickIntervalWidget);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        clickOptionsWidget = new QWidget(centralwidget);
        clickOptionsWidget->setObjectName(QString::fromUtf8("clickOptionsWidget"));
        verticalLayout_4 = new QVBoxLayout(clickOptionsWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_5 = new QLabel(clickOptionsWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        verticalLayout_4->addWidget(label_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_6 = new QLabel(clickOptionsWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        verticalLayout_3->addWidget(label_6);

        label_7 = new QLabel(clickOptionsWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);

        verticalLayout_3->addWidget(label_7);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        comboBox = new QComboBox(clickOptionsWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout_2->addWidget(comboBox);

        comboBox_2 = new QComboBox(clickOptionsWidget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        verticalLayout_2->addWidget(comboBox_2);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_2);


        horizontalLayout_10->addWidget(clickOptionsWidget);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_7);

        clickReapetWidget = new QWidget(centralwidget);
        clickReapetWidget->setObjectName(QString::fromUtf8("clickReapetWidget"));
        verticalLayout_6 = new QVBoxLayout(clickReapetWidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_8 = new QLabel(clickReapetWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        verticalLayout_6->addWidget(label_8);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        radioButton = new QRadioButton(clickReapetWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setFont(font1);

        horizontalLayout_3->addWidget(radioButton);

        spinBox = new QSpinBox(clickReapetWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout_3->addWidget(spinBox);

        label_9 = new QLabel(clickReapetWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);

        horizontalLayout_3->addWidget(label_9);


        verticalLayout_5->addLayout(horizontalLayout_3);

        radioButton_2 = new QRadioButton(clickReapetWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setFont(font1);

        verticalLayout_5->addWidget(radioButton_2);


        verticalLayout_6->addLayout(verticalLayout_5);


        horizontalLayout_10->addWidget(clickReapetWidget);


        verticalLayout_8->addLayout(horizontalLayout_10);

        cursorPositionWidget_2 = new QWidget(centralwidget);
        cursorPositionWidget_2->setObjectName(QString::fromUtf8("cursorPositionWidget_2"));
        cursorPositionWidget = new QVBoxLayout(cursorPositionWidget_2);
        cursorPositionWidget->setObjectName(QString::fromUtf8("cursorPositionWidget"));
        label_10 = new QLabel(cursorPositionWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        cursorPositionWidget->addWidget(label_10);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        cursorPositionWidget->addItem(verticalSpacer_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        radioButton_3 = new QRadioButton(cursorPositionWidget_2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setFont(font1);

        horizontalLayout_8->addWidget(radioButton_3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        radioButton_4 = new QRadioButton(cursorPositionWidget_2);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setFont(font1);

        horizontalLayout_7->addWidget(radioButton_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_11 = new QLabel(cursorPositionWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font1);

        horizontalLayout_4->addWidget(label_11);

        lineEdit_5 = new QLineEdit(cursorPositionWidget_2);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        horizontalLayout_4->addWidget(lineEdit_5);


        horizontalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_12 = new QLabel(cursorPositionWidget_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font1);

        horizontalLayout_5->addWidget(label_12);

        lineEdit_6 = new QLineEdit(cursorPositionWidget_2);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        horizontalLayout_5->addWidget(lineEdit_6);


        horizontalLayout_6->addLayout(horizontalLayout_5);


        horizontalLayout_7->addLayout(horizontalLayout_6);


        horizontalLayout_8->addLayout(horizontalLayout_7);


        cursorPositionWidget->addLayout(horizontalLayout_8);


        verticalLayout_8->addWidget(cursorPositionWidget_2);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        start = new QPushButton(centralwidget);
        start->setObjectName(QString::fromUtf8("start"));
        start->setAutoFillBackground(false);
        start->setStyleSheet(QString::fromUtf8("QPushButton:pressed{\n"
"background-color: gray;\n"
"}\n"
"QPushButton{\n"
"border: 1px solid white;\n"
"}"));

        horizontalLayout_9->addWidget(start);

        stop = new QPushButton(centralwidget);
        stop->setObjectName(QString::fromUtf8("stop"));
        stop->setAutoFillBackground(false);
        stop->setStyleSheet(QString::fromUtf8("QPushButton:pressed{\n"
"background-color: gray;\n"
"}\n"
"QPushButton{\n"
"border: 1px solid white;\n"
"}"));

        horizontalLayout_9->addWidget(stop);


        verticalLayout_7->addLayout(horizontalLayout_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        settings = new QPushButton(centralwidget);
        settings->setObjectName(QString::fromUtf8("settings"));
        settings->setAutoFillBackground(false);
        settings->setStyleSheet(QString::fromUtf8("QPushButton:pressed{\n"
"background-color: gray;\n"
"}\n"
"QPushButton{\n"
"border: 1px solid white;\n"
"}"));

        horizontalLayout_11->addWidget(settings);

        getPos = new QPushButton(centralwidget);
        getPos->setObjectName(QString::fromUtf8("getPos"));
        getPos->setAutoFillBackground(false);
        getPos->setStyleSheet(QString::fromUtf8("QPushButton:pressed{\n"
"background-color: gray;\n"
"}\n"
"QPushButton{\n"
"border: 1px solid white;\n"
"}"));

        horizontalLayout_11->addWidget(getPos);


        verticalLayout_7->addLayout(horizontalLayout_11);


        verticalLayout_8->addLayout(verticalLayout_7);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 629, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        clickIntervalLabel->setText(QCoreApplication::translate("MainWindow", "Click interval", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "hours", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "minutes", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "seconds", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "milliseconds", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Click options", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Mouse button  ", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Click type", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Click repeat", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "Repeat", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "times", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "Repeat until stopped", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Cursor position", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "Current location", nullptr));
        radioButton_4->setText(QCoreApplication::translate("MainWindow", "Pick location", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        settings->setText(QCoreApplication::translate("MainWindow", "Hotkey settings", nullptr));
        getPos->setText(QCoreApplication::translate("MainWindow", "Get cursor pos (`)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
