#include "mythread.h"
#include "mainwindow.h"

MyThread::MyThread()
{

}

void MyThread::run()
{
    while(true){
        if(MainWindow::currentClick == MainWindow::keyBind){
            if(!clicked) {
                emit startSignal();
                MainWindow::currentClick = "";
            }
            else {
                emit stopSignal();
                MainWindow::currentClick = "";
            }
        }
        else if(MainWindow::currentClick == "`"){
            emit getPosSignal();
            MainWindow::currentClick = "";
        }
    }
}
