#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "auth.h"
#include "ui_auth.h"
#include "QFileDialog"
#include <QTextDocumentWriter>

void MainWindow::About_Lab1()
{
    auth* dg = new auth();
    dg->show();
}

void MainWindow::slotOpen()
{
    QString fileName = QFileDialog::getOpenFileName(0, "Вскрыть файл", QDir::currentPath(), "*.txt");
    QFile file(fileName);

    if (file.open(QIODevice::ReadOnly | QIODevice:: Text))
        ui->textEdit->setPlainText(file.readAll());
}

void MainWindow::slotSave()
{
    QString fileName = QFileDialog::getSaveFileName(0, "Сохранить файл", QDir::currentPath(), "*.txt");
    QTextDocumentWriter writer;
    writer.setFileName(fileName);
    writer.write(ui->textEdit->document());
}

void MainWindow::slotClear()
{
    ui->textEdit->clear();
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QAction* pactOpen = new QAction("file open action", 0);
    pactOpen->setText("&Вскрыть");
    pactOpen->setShortcut(QKeySequence("CTRL+E"));
    pactOpen->setToolTip("Вскрытие документа");
    pactOpen->setStatusTip("Вскрыть файл");
    pactOpen->setWhatsThis("Вскрыть файл");
    pactOpen->setIcon(QPixmap("1.png"));

    QAction* pactSave = new QAction("file save action", 0);
    pactSave->setText("&Сохранить");
    pactSave->setShortcut(QKeySequence("CTRL+S"));
    pactSave->setToolTip("Сохранение документа");
    pactSave->setStatusTip("Сохранить файл");
    pactSave->setWhatsThis("Сохранить файл");
    pactSave->setIcon(QPixmap("2.png"));

    QAction* pactClear = new QAction("clear textEdit action", 0);
    pactClear->setText("&Чистка");
    pactClear->setShortcut(QKeySequence("CTRL+F"));
    pactClear->setToolTip("Этническая чистка");
    pactClear->setStatusTip("Очистить территорию");
    pactClear->setWhatsThis("Очистить территорию");
    pactClear->setIcon(QPixmap("3.png"));

    ui->mainToolBar->addAction(pactOpen);
    ui->mainToolBar->addAction(pactSave);
    ui->mainToolBar->addAction(pactClear);

    connect(ui->action, SIGNAL(triggered()), this, SLOT(About_Lab1()));
    connect(pactOpen, SIGNAL(triggered()), SLOT(slotOpen()));
    connect(pactSave, SIGNAL(triggered()), SLOT(slotSave()));
    connect(pactClear, SIGNAL(triggered()), SLOT(slotClear()));

    QAction* pactOp = new QAction("file open action", 0);
    pactOp->setText("&Вскрыть");
    pactOp->setShortcut(QKeySequence("CTRL+E"));
    pactOp->setToolTip("Вскрытие документа");
    pactOp->setStatusTip("Вскрыть файл");
    pactOp->setWhatsThis("Вскрыть файл");

    QAction* pactS = new QAction("file save action", 0);
    pactS->setText("&Сохранить");
    pactS->setShortcut(QKeySequence("CTRL+S"));
    pactS->setToolTip("Сохранение документа");
    pactS->setStatusTip("Сохранить файл");
    pactS->setWhatsThis("Сохранить файл");

    QAction* pactCl = new QAction("clear textEdit action", 0);
    pactCl->setText("&Чистка");
    pactCl->setShortcut(QKeySequence("CTRL+F"));
    pactCl->setToolTip("Этническая чистка");
    pactCl->setStatusTip("Очистить территорию");
    pactCl->setWhatsThis("Очистить территорию");

    QMenu* pmnuFile = new QMenu("&Файл");
    pmnuFile->addAction(pactOp);
    pmnuFile->addAction(pactS);
    pmnuFile->addAction(pactCl);
    menuBar()->addMenu(pmnuFile);


}

MainWindow::~MainWindow()
{
    delete ui;
}
