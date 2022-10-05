#ifndef DOCWINDOW_OSHEPKOV_H
#define DOCWINDOW_OSHEPKOV_H

#include <QTextEdit>
#include <QDialog>
#include <QTextStream>
#include <QtWidgets>

class DocWindow_oshepkov : public QTextEdit
{
    Q_OBJECT
private:
    QString m_strFileName;
public:
    DocWindow_oshepkov(QWidget* pwgt = 0);
signals:
    void changeWindowTitle(const QString&);
public slots:
    void slotLoad();
    void slotSave();
    void slotSaveAs();
    void slotColor()
    {
        QColor color = QColorDialog::getColor();
        setTextColor(color);
    }
};

#endif // DOCWINDOW_OSHEPKOV_H
