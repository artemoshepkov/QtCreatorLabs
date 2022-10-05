#ifndef STARTDIALOG_OSHEPKOV_ARTEM_H
#define STARTDIALOG_OSHEPKOV_ARTEM_H

#include <QWidget>
#include <QPushButton>
#include <QMessageBox>
#include "inputdialog_oshepkov_artem.h"


class StartDialog_Oshepkov_Artem : public QPushButton
{
    Q_OBJECT

public:
    StartDialog_Oshepkov_Artem(QWidget* pwqt = 0) : QPushButton("Нажми", pwqt)
    {
        connect(this, SIGNAL(clicked()), SLOT(slotButtonClicked()));
    }

public slots:
    void slotButtonClicked()
    {
        InputDialog_Oshepkov_Artem* pInputDialog = new InputDialog_Oshepkov_Artem;

        if (pInputDialog->exec() == QDialog::Accepted)
        {
            QMessageBox::information(0,
                                     "Ваша информация: ",
                                     "Имя: "
                                     + pInputDialog->firstName()
                                     + "\nФамилия: "
                                     + pInputDialog->lastName()
                                     );
        }

        delete pInputDialog;

        QMessageBox msgBox;
        msgBox.setText("Вы хотетие снова ввести свою информацию?");
        //msgBox.setInformativeText("Вы хотетие снова ввести свою информацию?");
        msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
        msgBox.setDefaultButton(QMessageBox::Cancel);
        int ret = msgBox.exec();

        switch (ret) {
        case QMessageBox::Ok:
            slotButtonClicked();
            break;
        case QMessageBox::Cancel:
            this->close();
            break;
        }
    }
};

#endif // STARTDIALOG_OSHEPKOV_ARTEM_H
