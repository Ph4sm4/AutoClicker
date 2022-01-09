/********************************************************************************
** Form generated from reading UI file 'keybind.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYBIND_H
#define UI_KEYBIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_KeyBind
{
public:
    QLabel *label;

    void setupUi(QDialog *KeyBind)
    {
        if (KeyBind->objectName().isEmpty())
            KeyBind->setObjectName(QString::fromUtf8("KeyBind"));
        KeyBind->resize(400, 300);
        label = new QLabel(KeyBind);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 140, 321, 20));
        QFont font;
        font.setPointSize(12);
        font.setItalic(true);
        label->setFont(font);

        retranslateUi(KeyBind);

        QMetaObject::connectSlotsByName(KeyBind);
    } // setupUi

    void retranslateUi(QDialog *KeyBind)
    {
        KeyBind->setWindowTitle(QCoreApplication::translate("KeyBind", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("KeyBind", "Press any key ...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KeyBind: public Ui_KeyBind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYBIND_H
