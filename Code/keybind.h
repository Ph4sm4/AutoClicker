#ifndef KEYBIND_H
#define KEYBIND_H

#include <QDialog>
#include <QKeyEvent>
#include "dialog.h"
#include <QFile>
#include <QTextStream>

namespace Ui {
class KeyBind;
}

class KeyBind : public QDialog
{
    Q_OBJECT

public:
    explicit KeyBind(QWidget *parent = nullptr);
    ~KeyBind();
public slots:
    void keyPressEvent(QKeyEvent *event);
private:
    Ui::KeyBind *ui;
};

#endif // KEYBIND_H
