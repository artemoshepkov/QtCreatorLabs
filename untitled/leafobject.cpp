#include "leafobject.h"
#include <cmath>
# define M_PI 3.14159265358979323846
LeafObject::LeafObject(QObject *parent) :
    QObject(parent), QGraphicsItem()
{
}

LeafObject::~LeafObject()
{

}
QRectF LeafObject::boundingRect() const
{
    return QRectF(startx,starty,size,size);
}

void LeafObject::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{

        QRect rectangle(startx,starty,size,size);
        QPixmap pixmap;
        pixmap.load("leaf.png");
        painter->drawPixmap(rectangle,pixmap);
        Q_UNUSED(option);
        Q_UNUSED(widget);
}

void LeafObject::CollisionItem()
{
    if (objtype == 'r') CollisionRectangle();
    else if (objtype == 'e') CollisionEllipse();
}

void LeafObject::CollisionRectangle()
{
    int x1 = this->x() + startx;
    int x2 = this->x() + size + startx;
    int y1 = this->y() + starty;
    int y2 = this->y() + size + starty;

    if( (x1 == objx || x2 == objx || x1 == objx + obgjwidth || x2 == objx + obgjwidth) && (y1 > objy || y2 > objy) && (y1 < objy + objheigth || y2 < objy + objheigth))
    {
        speedx *= -1;
    }
    if( (y1 == objy || y2 == objy || y1 == objy + objheigth || y2 == objy + objheigth) && (x1 > objx || x2 > objx) && (x1 < objx + obgjwidth || x2 < objx + obgjwidth))
    {
        speedy *= -1;
    }

}
void LeafObject::CollisionEllipse()
{
    int x = this->x() + size/2;
    int y = this->y() + size/2;
    int radius = obgjwidth/2;
    int x2 = objx + radius;
    int y2 = objx + radius;

    int vectorx = x2 - x;
    int vectory = y2 - y;
\
    double lengthvector = sqrt(pow(vectorx,2) + pow(vectory,2));

    double scalar = vectorx;
    double lengthvector2 = 1;
    double cosinus = scalar / (lengthvector * lengthvector2);
    double angle = (acos(cosinus) * 180)/M_PI;

    if (angle >= 45 && angle <= 135)
    {
            // printf("(y %f - %d,%d)", angle,speedx,speedy);
     speedy *= -1;
    }
    if (angle <= 45 || angle >= 135)
    {
            // printf("(y %f - %d,%d)", angle,speedx,speedy);
     speedx *= -1;

    }


}
void LeafObject::slotCollisionBorder()
{
    setPos(mapToParent(speedx, speedy));
    int x1 = this->x() + startx;
    int x2 = this->x() + size + startx;
    int y1 = this->y() + starty;
    int y2 = this->y() + size + starty;

    if(x1 <= 0 || x1 >= 600 || x2 <= 0 || x2 >= 600){
        speedx *= -1;
    }

    if(y1 <= 0 || y1 >= 600 || y2 <= 0 || y2 >= 600){
        speedy *= -1;
    }

}
