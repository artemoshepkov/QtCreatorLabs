#ifndef OSHEPKOV_H
#define OSHEPKOV_H

#include <QWidget>
#include <QAbstractButton>

namespace Ui {
class Oshepkov;
}

class Oshepkov : public QWidget
{
    Q_OBJECT

public:
    explicit Oshepkov(QWidget *parent = 0);
    ~Oshepkov();

private:
    Ui::Oshepkov *ui;

public slots:
    void receiveData(QString str);
private slots:
    void on_buttonBox_clicked(QAbstractButton *button);
};

#endif // OSHEPKOV_H
