/********************************************************************************
** Form generated from reading UI file 'auth.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTH_H
#define UI_AUTH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_auth
{
public:
    QDialogButtonBox *buttonBox;
    QTextEdit *textEdit;
    QLabel *label;

    void setupUi(QDialog *auth)
    {
        if (auth->objectName().isEmpty())
            auth->setObjectName(QStringLiteral("auth"));
        auth->resize(468, 368);
        buttonBox = new QDialogButtonBox(auth);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(-30, 320, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        textEdit = new QTextEdit(auth);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(340, 130, 104, 71));
        label = new QLabel(auth);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 321, 281));
        label->setPixmap(QPixmap(QString::fromUtf8("../build-FirstLab-Desktop_Qt_5_10_0_MinGW_32bit-Debug/debug/781ab88f99938c5051309f172ca6771b.jpg")));

        retranslateUi(auth);
        QObject::connect(buttonBox, SIGNAL(accepted()), auth, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), auth, SLOT(reject()));

        QMetaObject::connectSlotsByName(auth);
    } // setupUi

    void retranslateUi(QDialog *auth)
    {
        auth->setWindowTitle(QApplication::translate("auth", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276\320\261 \320\260\320\262\321\202\320\276\321\200\320\260\321\205", nullptr));
        textEdit->setHtml(QApplication::translate("auth", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt;\">\320\236\321\211\320\265\320\277\320\272\320\276\320\262 aka \320\220\321\200\321\202\320\265\320\274 </span></p></body></html>", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class auth: public Ui_auth {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTH_H
