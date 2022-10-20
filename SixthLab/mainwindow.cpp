#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    myOshepkov = new Oshepkov();

    connect(ui->pushButton, SIGNAL(clicked()), myOshepkov, SLOT(show()));
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(onButtonSend()));
    connect(this, SIGNAL(sendData(QString)), myOshepkov, SLOT(receiveData(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    QString filename = QFileDialog::getOpenFileName(0, "Выберите изображение", QDir::currentPath());
    imagePath = filename;
    QImage image1(imagePath);
    ui->label->setPixmap(QPixmap::fromImage(image1));
}

void MainWindow::onButtonSend()
{
    QString st =
            imagePath + "*" + "ФИО: " + ui->lineEdit->text() + "\n"
            + "Должность: " + ui->lineEdit_2->text() + "\n"
            + "Рост: " +  ui->lineEdit_3->text() + "\n"
            + "Дата рождения: " +  ui->dateEdit->text();
    st += ui->radioButton->isChecked() == true ? "\nпол: мужской" : "\nпол: женский";

    emit sendData(st);
}
