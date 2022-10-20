/********************************************************************************
** Form generated from reading UI file 'oshepkov.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OSHEPKOV_H
#define UI_OSHEPKOV_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Oshepkov
{
public:
    QTextEdit *textEdit;
    QLabel *label;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *Oshepkov)
    {
        if (Oshepkov->objectName().isEmpty())
            Oshepkov->setObjectName(QStringLiteral("Oshepkov"));
        Oshepkov->resize(393, 282);
        Oshepkov->setStyleSheet(QStringLiteral("background-color: rgb(211, 181, 255)"));
        textEdit = new QTextEdit(Oshepkov);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(151, 31, 221, 161));
        label = new QLabel(Oshepkov);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 121, 161));
        label->setStyleSheet(QStringLiteral("QMainWindow { background-color: red; }"));
        buttonBox = new QDialogButtonBox(Oshepkov);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(80, 230, 237, 23));
        buttonBox->setStyleSheet(QStringLiteral("align: center"));
        buttonBox->setStandardButtons(QDialogButtonBox::Open|QDialogButtonBox::Reset|QDialogButtonBox::Save);

        retranslateUi(Oshepkov);

        QMetaObject::connectSlotsByName(Oshepkov);
    } // setupUi

    void retranslateUi(QWidget *Oshepkov)
    {
        Oshepkov->setWindowTitle(QApplication::translate("Oshepkov", "Form", nullptr));
        label->setText(QApplication::translate("Oshepkov", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Oshepkov: public Ui_Oshepkov {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OSHEPKOV_H
