#include "oshepkov.h"
#include "ui_oshepkov.h"

#include <QFileDialog>
#include <QTextDocumentWriter>

Oshepkov::Oshepkov(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Oshepkov)
{
    ui->setupUi(this);
}

Oshepkov::~Oshepkov()
{
    delete ui;
}

void Oshepkov::receiveData(QString str)
{
    QStringList lst = str.split("*");
    ui->textEdit->setText(lst.at(1) + "\n" + lst.at(0));
    if (lst.size() > 1)
    {
        QImage image1(lst.at(0));
        ui->label->setPixmap(QPixmap::fromImage(image1));
    }
}


void Oshepkov::on_buttonBox_clicked(QAbstractButton *button)
{
    if (button->text() == "Reset")
    {
        ui->textEdit->clear();
    }
    if (button->text() == "Save")
    {
        QString fileName = QFileDialog::getSaveFileName(0, "Сохранить файл", QDir::currentPath(), "*.txt");
        QTextDocumentWriter writer;
        writer.setFileName(fileName);
        writer.write(ui->textEdit->document());
    }
    if (button->text() == "Open")
    {
        QString fileName = QFileDialog::getOpenFileName(0, "Открыть файл", QDir::currentPath(), "*.txt");
        QFile file(fileName);

        if (file.open(QIODevice::ReadOnly | QIODevice:: Text))
            ui->textEdit->setPlainText(file.readAll());
    }
}
