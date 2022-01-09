/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *pushButton;
    QCheckBox *checkBox;
    QLabel *label;
    QPushButton *bind;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(400, 300);
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(280, 250, 80, 25));
        pushButton->setAutoFillBackground(true);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton:pressed{\n"
"background-color: gray;\n"
"}\n"
"QPushButton{\n"
"border: 1px solid white;\n"
"}"));
        checkBox = new QCheckBox(Dialog);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(50, 70, 171, 22));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(true);
        checkBox->setFont(font);
        checkBox->setAutoFillBackground(false);
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 110, 121, 31));
        QFont font1;
        font1.setPointSize(10);
        font1.setItalic(true);
        label->setFont(font1);
        bind = new QPushButton(Dialog);
        bind->setObjectName(QString::fromUtf8("bind"));
        bind->setGeometry(QRect(180, 110, 31, 25));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "Ok", nullptr));
        checkBox->setText(QCoreApplication::translate("Dialog", "Resizable window", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Change binding", nullptr));
        bind->setText(QCoreApplication::translate("Dialog", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
