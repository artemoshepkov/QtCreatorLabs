#include "mainwindow.h"
#include <QApplication>
#include <sdiprogram_oshepkov_artem.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SDIProgram_oshepkov w;
    w.show();

    return a.exec();
}
