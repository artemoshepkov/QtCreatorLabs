#ifndef CHARACTER_H
#define CHARACTER_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsSceneMouseEvent>
#include <QDebug>
#include <QCursor>

#include <windows.h>

class Character : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit Character(QObject *parent = 0);
    ~Character();

signals:

public slots:
    void slotGameTimer();

private:
    int angle;
    int speed = 1;

protected:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // CHARACTER_H
