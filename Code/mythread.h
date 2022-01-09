#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>

class MyThread : public QThread
{
    Q_OBJECT

public:
    MyThread();
    void run() override;
    bool clicked = false;
signals:
    void startSignal();
    void stopSignal();
    void getPosSignal();

};

#endif // MYTHREAD_H
