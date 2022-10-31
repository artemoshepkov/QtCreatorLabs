#include "character.h"

Character::Character(QObject *parent) :
    QObject(parent), QGraphicsItem()
{
    angle = 0;
    setRotation(angle);
}

Character::~Character()
{

}

QRectF Character::boundingRect() const
{
    return QRectF(0,0,50,50);
}

void Character::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
        QRect rectangle(0,0,50,50);
        QPixmap pixmap;
        pixmap.load("snow.png");
        painter->drawPixmap(rectangle, pixmap);

        Q_UNUSED(option);
        Q_UNUSED(widget);
}

void Character::slotGameTimer()
{
    setPos(mapToParent(speed, speed));

    foreach (auto *item, collidingItems())
    {
        if (item == this)
            continue;
        angle += 45;
        setRotation(angle);
    }

    if(this->x() - 10 < -250){
        this->setX(-200);       // left
    }
    if(this->x() + 10 > 250){
        this->setX(200);        // right
    }

    if(this->y() - 10 < -250){
        this->setY(-200);       // top
    }
    if(this->y() + 10 > 250){
        this->setY(200);        // bottom
    }

}

