/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QWidget *widget;
    QFormLayout *formLayout;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QDateEdit *dateEdit;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(330, 323);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(211, 181, 255)"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 240, 75, 23));
        pushButton->setStyleSheet(QStringLiteral(""));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(150, 10, 171, 220));
        formLayout = new QFormLayout(widget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setHorizontalSpacing(6);
        formLayout->setContentsMargins(0, 0, 0, 6);
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, lineEdit);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::SpanningRole, label_3);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        formLayout->setWidget(3, QFormLayout::SpanningRole, lineEdit_2);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        formLayout->setWidget(5, QFormLayout::SpanningRole, lineEdit_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_4);

        dateEdit = new QDateEdit(widget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        formLayout->setWidget(6, QFormLayout::FieldRole, dateEdit);

        radioButton = new QRadioButton(widget);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        formLayout->setWidget(8, QFormLayout::FieldRole, radioButton);

        radioButton_2 = new QRadioButton(widget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        formLayout->setWidget(9, QFormLayout::FieldRole, radioButton_2);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, label_2);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 10, 131, 201));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));
        label->setFrameShape(QFrame::Panel);

        verticalLayout->addWidget(label);

        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        MainWindow->setCentralWidget(centralWidget);
        pushButton_2->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        dateEdit->raise();
        radioButton->raise();
        radioButton_2->raise();
        lineEdit_3->raise();
        label_5->raise();
        label_2->raise();
        pushButton->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 330, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\320\223\320\276\321\202\320\276\320\262\320\276", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\320\240\320\276\321\201\321\202", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        radioButton->setText(QApplication::translate("MainWindow", "\320\234", nullptr));
        radioButton_2->setText(QApplication::translate("MainWindow", "\320\226", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\244\320\230\320\236", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\244\320\276\321\202\320\276", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
