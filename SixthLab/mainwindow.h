#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "oshepkov.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Oshepkov *myOshepkov;
    QString imagePath;
signals:
    void sendData(QString str);
private slots:
    void onButtonSend();
    void on_pushButton_2_clicked();
};

#endif // MAINWINDOW_H
