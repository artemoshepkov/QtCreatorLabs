#ifndef SDIPROGRAM_OSHEPKOV_H
#define SDIPROGRAM_OSHEPKOV_H

#include <QMainWindow>
#include <QtWidgets>
#include "docwindow_oshepkov_artem.h"
#include <QMessageBox>

class SDIProgram_oshepkov : public QMainWindow
{
    Q_OBJECT
public:
    SDIProgram_oshepkov(QWidget *pwgt = 0) : QMainWindow(pwgt)
    {
        QMenu* pmnuFile = new QMenu("&File");
        QMenu* pmnuHelp = new QMenu("&Help");
        DocWindow_oshepkov* pdoc = new DocWindow_oshepkov;

        pmnuFile->addAction("&Open...",
                            pdoc,
                            SLOT(slotLoad()),
                            QKeySequence("CTRL+O")
                            );
        pmnuFile->addAction("&Save",
                            pdoc,
                            SLOT(slotSave()),
                            QKeySequence("CTRL+S")
                            );

        pmnuFile->addAction("&Save As...",
                            pdoc,
                            SLOT(slotSaveAs()),
                            QKeySequence("CTRL+W")
                            );

        pmnuHelp->addAction("&About",
                            this,
                            SLOT(slotAbout()),
                            Qt::Key_F1
                            );
        pmnuFile->addAction("&Color",
                            pdoc,
                            SLOT(slotColor()),
                            Qt::Key_F2
                            );

        menuBar()->addMenu(pmnuFile);
        menuBar()->addMenu(pmnuHelp);

        setCentralWidget(pdoc);

        connect(pdoc,
                SIGNAL(changeWindowTitle(const QString&)),
                SLOT(slotChangeWindowTitle(const QString&))
                );

        statusBar()->showMessage("Ready", 2000);
    }

public slots:
    void slotAbout()
    {
        QMessageBox::about(this, "Application", "ИП-017 Ощепков Артем");
    }
    void slotChangeWindowTitle(const QString& str)
    {
        setWindowTitle(str);
    }
};

#endif // SDIPROGRAM_OSHEPKOV_H
