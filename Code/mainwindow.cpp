#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include <QString>

QString MainWindow::keyBind;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
///--------------------------------------------------------------------------------------------------------
    QFile file("settings.txt");
    file.open(QIODevice::ReadWrite);
    QTextStream stream(&file);
    if(stream.atEnd()){
        qDebug()<<"true";
        stream << "0" << '\n';
        stream << "F6";
    }
    QString isResizable = stream.readLine();
    qDebug() << isResizable;
    if(isResizable == "0") this->setFixedSize(629, 454);
    else this->setMinimumSize(629, 454);
    file.close();
///--------------------------------------------------------------------------------------------------------
    this->setStyleSheet("background-color: #383838; color: silver;");
    this->setWindowTitle("Auto~Clicker");
///--------------------------------------------------------------------------------------------------------
    ui->clickIntervalWidget->setStyleSheet("border: 1px solid white;");

    ui->lineEdit->setText("0");
    ui->lineEdit_2->setText("0");
    ui->lineEdit_3->setText("0");
    ui->lineEdit_4->setText("100");
///--------------------------------------------------------------------------------------------------------
    ui->clickIntervalLabel->setStyleSheet("border: none;");

    ui->label->setStyleSheet("border: none;");
    ui->label_2->setStyleSheet("border: none;");
    ui->label_3->setStyleSheet("border: none;");
    ui->label_4->setStyleSheet("border: none;");
///--------------------------------------------------------------------------------------------------------
    ui->clickOptionsWidget->setStyleSheet("border: 1px solid white;");

    ui->label_5->setStyleSheet("border: none;");
    ui->label_6->setStyleSheet("border: none;");
    ui->label_7->setStyleSheet("border: none;");
///--------------------------------------------------------------------------------------------------------
    ui->clickReapetWidget->setStyleSheet("border: 1px solid white;");

    ui->label_8->setStyleSheet("border: none;");
    ui->label_9->setStyleSheet("border: none;");
    ui->radioButton->setStyleSheet("border: none;");
    ui->radioButton_2->setStyleSheet("border: none;");
    ui->spinBox->setStyleSheet("border: none; background-color: white; color: black;");
///--------------------------------------------------------------------------------------------------------
    ui->cursorPositionWidget_2->setStyleSheet("border: 1px solid white;");
    ui->radioButton_3->setStyleSheet("border: none;");
    ui->radioButton_4->setStyleSheet("border: none;");
    ui->label_10->setStyleSheet("border: none;");
    ui->label_11->setStyleSheet("border: none;");
    ui->label_12->setStyleSheet("border: none;");
    ui->lineEdit_5->setText("0");
    ui->lineEdit_6->setText("0");
    ui->lineEdit_5->setStyleSheet("width: 50px;");
    ui->lineEdit_6->setStyleSheet("width: 50px;");
///--------------------------------------------------------------------------------------------------------
    ui->start->setFixedSize(300, 61);
    ui->stop->setFixedSize(300, 61);
    ui->getPos->setFixedSize(300, 61);
    ui->settings->setFixedSize(300, 61);
///--------------------------------------------------------------------------------------------------------
    ui->radioButton_2->setChecked(true);
    ui->radioButton_3->setChecked(true);
///--------------------------------------------------------------------------------------------------------
    QFont font = ui->label->font();
    font.setPointSize(10);

    ui->clickIntervalLabel->setFont(font);
    ui->label->setFont(font);
    ui->label_2->setFont(font);
    ui->label_3->setFont(font);
    ui->label_4->setFont(font);
    ui->label_5->setFont(font);
    ui->label_6->setFont(font);
    ui->label_7->setFont(font);
    ui->label_8->setFont(font);
    ui->label_9->setFont(font);
    ui->label_10->setFont(font);
    ui->label_11->setFont(font);
    ui->label_12->setFont(font);
///--------------------------------------------------------------------------------------------------------
    QFont font2 = ui->lineEdit->font();
    font2.setPointSize(10);
    ui->lineEdit->setFont(font2);
    ui->lineEdit_2->setFont(font2);
    ui->lineEdit_3->setFont(font2);
    ui->lineEdit_4->setFont(font2);
    ui->lineEdit_5->setFont(font2);
    ui->lineEdit_6->setFont(font2);
///--------------------------------------------------------------------------------------------------------
    QFont font3 = ui->comboBox->font();
    font3.setPointSize(10);
    ui->comboBox->setFont(font3);
    ui->comboBox_2->setFont(font3);
///--------------------------------------------------------------------------------------------------------
    QFont font4 = ui->radioButton->font();
    font4.setPointSize(10);
    ui->radioButton->setFont(font4);
    ui->radioButton_2->setFont(font4);
    ui->radioButton_3->setFont(font4);
    ui->radioButton_4->setFont(font4);
///--------------------------------------------------------------------------------------------------------
    QFont font5 = ui->start->font();
    font5.setPointSize(10);
    ui->start->setFont(font5);
    ui->stop->setFont(font5);
    ui->getPos->setFont(font5);
    ui->settings->setFont(font5);
///--------------------------------------------------------------------------------------------------------
    file.open(QIODevice::ReadOnly);
    QTextStream stream2(&file);
    stream2.readLine();
    keyBind = stream2.readLine();
    ui->start->setText("Start (" + keyBind + ")");
    ui->stop->setText("Stop (" + keyBind + ")");
    file.close();
///--------------------------------------------------------------------------------------------------------

    ui->comboBox->addItem("Left");
    ui->comboBox->addItem("Right");
    ui->comboBox->addItem("Scroll");
///--------------------------------------------------------------------------------------------------------
    ui->comboBox_2->addItem("Single");
    ui->comboBox_2->addItem("Double");
    ui->comboBox_2->addItem("Triple");
    ui->comboBox_2->addItem("Hold");
    ui->comboBox_2->addItem("Hold + w");
    ui->comboBox_2->addItem("Bridge");
///--------------------------------------------------------------------------------------------------------
    timer = new QTimer();
    ui->lineEdit->setValidator( new QIntValidator(0, 1000, this) );
    ui->lineEdit_2->setValidator( new QIntValidator(0, 1000, this) );
    ui->lineEdit_3->setValidator( new QIntValidator(0, 1000, this) );
    ui->lineEdit_4->setValidator( new QIntValidator(0, 1000, this) );
    ui->lineEdit_5->setValidator( new QIntValidator(0, 1000, this) );
    ui->lineEdit_6->setValidator( new QIntValidator(0, 1000, this) );
///--------------------------------------------------------------------------------------------------------
    hasStarted = false;
    connect(timer, SIGNAL(timeout()), this, SLOT(click()));
    dialog = new Dialog(this);

    connect(dialog, SIGNAL(sendSignal()), this, SLOT(updateSettings()));
///--------------------------------------------------------------------------------------------------------
    this->setFocus();
///--------------------------------------------------------------------------------------------------------
    thread = new MyThread;
    thread->start();
    connect(thread, SIGNAL(startSignal()), this, SLOT(on_start_clicked()));
    connect(thread, SIGNAL(stopSignal()), this, SLOT(on_stop_clicked()));
///--------------------------------------------------------------------------------------------------------
    ui->spinBox->setValue(10);
    connect(thread, SIGNAL(getPosSignal()), this, SLOT(on_getPos_clicked()));
///--------------------------------------------------------------------------------------------------------
    qDebug()<<"window created";
    setWindowIcon(QIcon(QCoreApplication::applicationDirPath() + "/click.ico"));
    setWindowFlags( Qt::Window | Qt::CustomizeWindowHint | Qt::WindowTitleHint | Qt::WindowSystemMenuHint | Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint );

}

MainWindow::~MainWindow()
{
    timer->stop();
    qDebug()<<"window destroyed";
    delete timer;
    delete ui;
}

void MainWindow::on_start_clicked()
{
    if(timer->isActive()) timer->stop();
    qDebug()<<"started";
    comboBox2text = ui->comboBox_2->currentText();
    qDebug()<<"combobox2text: "<<comboBox2text;


    if(ui->lineEdit->text()=="") hours = 0;
    else hours = ui->lineEdit->text().toInt();
    if(ui->lineEdit_2->text()=="") minutes = 0;
    else minutes = ui->lineEdit_2->text().toInt();
    if(ui->lineEdit_3->text()=="") seconds = 0;
    else seconds = ui->lineEdit_3->text().toInt();
    if(ui->lineEdit_4->text()=="") milliseconds = 0;
    else milliseconds = ui->lineEdit_4->text().toInt();
    timer->setInterval(hours*60*60*1000 + minutes*60*1000 + seconds*1000 + milliseconds);
    timer->start();
    hasStarted = true;
    thread->clicked = true;

}

void MainWindow::on_stop_clicked()
{
    clickCount = 0;
    qDebug()<<"stopped";
    timer->stop();
    hasStarted = false;
    thread->clicked = false;
    if(comboBox2text == "Hold"){
        switch(ui->comboBox->currentIndex()){
        case 0:{
            mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
            break;
        }
        case 1:{
            mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
            break;
        }
        case 2:{
            mouse_event(MOUSEEVENTF_MIDDLEUP, 0, 0, 0, 0);
            break;
        }
        }
    }
    else if(comboBox2text == "Hold + w"){
        qDebug()<<"trueeeeee";
        switch(ui->comboBox->currentIndex()){
        case 0:{
            qDebug()<<"releasing keys";
            mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
            releaseShiftS();

            break;
        }
        case 1:{
            mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
            releaseShiftS();
            break;
        }
        case 2:{
            mouse_event(MOUSEEVENTF_MIDDLEUP, 0, 0, 0, 0);
            releaseShiftS();

            break;
        }
        }
    }
    else if(comboBox2text == "Bridge"){
        qDebug()<<"releasing keys";
        mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
        releaseShiftS();
    }
}

void MainWindow::on_getPos_clicked()
{
    ui->lineEdit_5->setText(QString::number(QCursor::pos().x()));
    ui->lineEdit_6->setText(QString::number(QCursor::pos().y()));
}

void MainWindow::on_settings_clicked()
{
    dialog->show();
}

void MainWindow::sendInput()
{
    SHORT key;
    UINT mappedkey;
    INPUT input = { 0 };
    key = VkKeyScan('W');
    mappedkey = MapVirtualKey(LOBYTE(key), 0);
    input.type = INPUT_KEYBOARD;
    input.ki.dwFlags = KEYEVENTF_SCANCODE;
    input.ki.wScan = mappedkey;
    SendInput(1, &input, sizeof(input));
    Sleep(300);
    input.ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
    SendInput(1, &input, sizeof(input));
}

void MainWindow::releaseShiftS()
{
    SHORT key;
    UINT mappedkey;
    INPUT input = { 0 };
    key = VK_LSHIFT;
    mappedkey = MapVirtualKey(LOBYTE(key), 0);
    input.type = INPUT_KEYBOARD;
    input.ki.dwFlags = KEYEVENTF_SCANCODE;
    input.ki.wScan = mappedkey;

    input.ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
    SendInput(1, &input, sizeof(input));

    key = VkKeyScan('S');
    mappedkey = MapVirtualKey(LOBYTE(key), 0);
    input.type = INPUT_KEYBOARD;
    input.ki.dwFlags = KEYEVENTF_SCANCODE;
    input.ki.wScan = mappedkey;

    input.ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
    SendInput(1, &input, sizeof(input));
}

void MainWindow::sendShift()
{
    SHORT key;
    UINT mappedkey;
    INPUT input = { 0 };
    key = VK_LSHIFT;
    mappedkey = MapVirtualKey(LOBYTE(key), 0);
    input.type = INPUT_KEYBOARD;
    input.ki.dwFlags = KEYEVENTF_SCANCODE;
    input.ki.wScan = mappedkey;
    SendInput(1, &input, sizeof(input));
}

void MainWindow::sendInputS()
{
    SHORT key;
    UINT mappedkey;
    INPUT input = { 0 };
    key = VkKeyScan('S');
    mappedkey = MapVirtualKey(LOBYTE(key), 0);
    input.type = INPUT_KEYBOARD;
    input.ki.dwFlags = KEYEVENTF_SCANCODE;
    input.ki.wScan = mappedkey;
    SendInput(1, &input, sizeof(input));
    //Sleep(300);
    //input.ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
    //SendInput(1, &input, sizeof(input));
}

void MainWindow::click()
{
    int index = ui->comboBox_2->currentIndex();

    if(ui->radioButton->isChecked() && clickCount == ui->spinBox->value()) {
        on_stop_clicked(); return;
    }
    else{
        if(ui->radioButton_4->isChecked()){
            QCursor::setPos(ui->lineEdit_5->text().toInt(), ui->lineEdit_6->text().toInt());
        }

        if(ui->comboBox->currentText() == "Left"){

            if(comboBox2text == "Hold"){
                mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
                qDebug()<<"hold";
            }
            else if(comboBox2text == "Hold + w"){
                mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
                sendInput();
                sendShift();

            }
            else{
                qDebug()<<clickCount;
                for(int i = 0; i < index + 1; i++){
                    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
                    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
                }
            }
        }
        else if(ui->comboBox->currentText() == "Right"){

            if(comboBox2text == "Hold"){
                mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
            }
            else if(comboBox2text == "Hold + w"){
                mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
                sendInput();
                sendShift();
            }
            else if(comboBox2text == "Bridge"){
                mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
                sendInputS();
                sendShift();
            }
            else{
                qDebug()<<clickCount;
                for(int i = 0; i < index + 1; i++){
                    mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
                    mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                }
            }

        }
        else if(ui->comboBox->currentText() == "Scroll"){

            if(comboBox2text == "Hold"){
                mouse_event(MOUSEEVENTF_MIDDLEDOWN, 0, 0, 0, 0);
            }
            else if(comboBox2text == "Hold + w"){
                mouse_event(MOUSEEVENTF_MIDDLEDOWN, 0, 0, 0, 0);
                sendInput();
                sendShift();
            }
            else{
                qDebug()<<clickCount;
                for(int i = 0; i < index + 1; i++){
                    mouse_event(MOUSEEVENTF_MIDDLEDOWN, 0, 0, 0, 0);
                    mouse_event(MOUSEEVENTF_MIDDLEUP, 0, 0, 0, 0);
                }
            }
        }

    }

    clickCount++;
}

void MainWindow::updateSettings()
{
    QFile file("settings.txt");
    file.open(QIODevice::ReadOnly);

    QTextStream stream(&file);
    QString line;
    line = stream.readLine();
    qDebug()<<"this line: " << line;
    if(line == "0") {
        this->setFixedSize(629, 454);
    }
    else{
        this->setMinimumSize(0, 0);
        this->setMaximumSize(QWIDGETSIZE_MAX, QWIDGETSIZE_MAX);
    }
    line = stream.readLine();
    qDebug()<<"key button text: "<<line;
    ui->start->setText("Start (" + line + ")");
    ui->stop->setText("Stop (" + line + ")");

    keyBind = line;

    file.close();
}
