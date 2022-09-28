#ifndef INPUTDIALOG_OSHEPKOV_ARTEM_H
#define INPUTDIALOG_OSHEPKOV_ARTEM_H

#include <QDialog>
#include <QLineEdit>

class QLineEdit;

class InputDialog_Oshepkov_Artem : public QDialog
{
    Q_OBJECT

private:
    QLineEdit* m_ptxtFirstName;
    QLineEdit* m_ptxtLastName;

public:
    InputDialog_Oshepkov_Artem(QWidget* pwgt = 0);

    QString firstName() const;
    QString lastName() const;
};

#endif // INPUTDIALOG_OSHEPKOV_ARTEM_H
