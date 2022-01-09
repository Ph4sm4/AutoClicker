#include "dialog.h"
#include "ui_dialog.h"
#include "keybind.h"
#include "mainwindow.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: #383838; color: silver;");
    this->setWindowTitle("Settings");
    this->setFixedSize(400,300);
    this->setWindowModality(Qt::WindowModal);
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowContextHelpButtonHint);
    QFile file("settings.txt");
    file.open(QIODevice::ReadOnly);
    QTextStream stream(&file);
    QString line = stream.readLine();
    qDebug()<<line;
    if(line == "0") ui->checkBox->setChecked(false);
    else ui->checkBox->setChecked(true);
    ui->bind->setText("...");
    file.close();
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QFile file("settings.txt");
    file.open(QIODevice::ReadOnly);
    QTextStream stream(&file);
    QString line;
    for(int i = 0; i < 2; i++) line = stream.readLine();
    file.close();

    stream.reset();
    file.open(QIODevice::WriteOnly | QIODevice::Truncate);

    stream << ui->checkBox->isChecked() << '\n';
    stream << line;
    file.close();
    qDebug()<<"currentNum: "<<line;
    emit sendSignal();
    MainWindow::currentClick = "";
    this->close();
}

void Dialog::on_checkBox_clicked()
{
    if(!changed) changed = true;
    else changed = false;
}

void Dialog::on_bind_clicked()
{
    QFile file("settings.txt");
    file.open(QIODevice::ReadOnly);
    QTextStream stream(&file);
    stream.readLine();
    prevNum = stream.readLine();
    qDebug()<<"prevnum: "<<prevNum;
    file.close();

    KeyBind *bind = new KeyBind(this);
    bind->show();

}

void Dialog::restart(){
    QString program = QApplication::applicationFilePath();
    QStringList arguments = QApplication::arguments();
    QString workingDirectory = QDir::currentPath();
    QProcess::startDetached(program, arguments, workingDirectory);
    QApplication::exit();
}
