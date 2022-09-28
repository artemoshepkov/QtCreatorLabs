#include "mainwindow.h"
#include <QApplication>
#include "startdialog_oshepkov_artem.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    StartDialog_Oshepkov_Artem startDialog;
    startDialog.show();

    return a.exec();
}
