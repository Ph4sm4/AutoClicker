#include "keybind.h"
#include "ui_keybind.h"
#include "mainwindow.h"
#include <QKeySequence>


KeyBind::KeyBind(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::KeyBind)
{
    ui->setupUi(this);
    this->setWindowModality(Qt::WindowModal);
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowContextHelpButtonHint);
}

KeyBind::~KeyBind()
{
    delete ui;
}

void KeyBind::keyPressEvent(QKeyEvent *event)
{
    QFile file("settings.txt");
    file.open(QIODevice::ReadOnly);
    QTextStream stream(&file);
    QString temp = stream.readLine();
    file.close();
    file.open(QIODevice::WriteOnly);
    stream.reset();
    qDebug()<<"temp: "<<temp;
    stream << temp << '\n';
    qDebug()<<"key: "<<event->key();
    stream << QKeySequence((event->modifiers())+(event->key())).toString();
    file.close();
    MainWindow::currentClick = "";
    this->close();
}
