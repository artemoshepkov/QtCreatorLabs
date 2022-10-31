#ifndef LEAFOBJECT_H
#define LEAFOBJECT_H

#include <QGraphicsItem>
#include <QPainter>

class LeafObject : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    void CollisionItem();
    void CollisionRectangle();
    void CollisionEllipse();
    void SetPoint(int x, int y, int width, int heigth, char type)
    {
        objx = x;
        objy = y;
        obgjwidth = width;
        objheigth = heigth;
        objtype = type;
    }
    explicit LeafObject(QObject *parent = 0);
    ~LeafObject(void);
public slots:
    void slotCollisionBorder();

protected:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

private:
    int size = 50;
    int startx = 10;
    int starty = startx;
    int speedx = 1;
    int speedy = 1;
    int objx;
    int objy;
    int obgjwidth;
    int objheigth;
    int objtype;
};

#endif // LEAFOBJECT_H
