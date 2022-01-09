#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QProcess>
#include <QKeyEvent>
#include <QDir>
#include <QMainWindow>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

signals:
    void sendSignal();

public slots:
    void on_pushButton_clicked();

private slots:
    void on_checkBox_clicked();

    void on_bind_clicked();

private:
    Ui::Dialog *ui;
    bool changed = false;
    void restart();
    QString prevNum;
    QString currentNum;
};

#endif // DIALOG_H
