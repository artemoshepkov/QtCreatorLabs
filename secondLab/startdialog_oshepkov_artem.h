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
    }
};

#endif // STARTDIALOG_OSHEPKOV_ARTEM_H
