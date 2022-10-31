#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QGraphicsScene>
#include <QShortcut>
#include <QTimer>
#include <leafobject.h>
#include <QRect>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void slotGameTimer();

private:
    Ui::MainWindow        *ui;
    QGraphicsScene        *gamescene;
    LeafObject            *object;
    static const int N = 4;
    QGraphicsItem         *items[N];
    int                   w[N];
    int                   h[N];
    char                  type[N];
    QTimer                *timer;
    //QList <QGraphicsItem*> items;
};

#endif // MAINWINDOW_H
