#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QFont>
#include <QTimer>
#include <windows.h>
#include <QThread>
#include "dialog.h"
#include "mythread.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    static QString currentClick;
    static QString keyBind;

public slots:

    void click();

    void updateSettings();

    void on_start_clicked();

signals:
    void sendSignal();

private slots:

    void on_stop_clicked();

    void on_getPos_clicked();

    void on_settings_clicked();

private:
    Ui::MainWindow *ui;
    bool hasStarted;
    QTimer *timer;
    int hours;
    int minutes;
    int seconds;
    int milliseconds;
    int clickCount = 0;
    Dialog *dialog;
    MyThread *thread;
    QString comboBox2text;
    void sendInput();
    void releaseShiftS();
    void sendShift();
    void sendInputS();

};
#endif // MAINWINDOW_H
