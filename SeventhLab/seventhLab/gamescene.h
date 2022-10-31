#ifndef GAMESCENE_H
#define GAMESCENE_H

#include <QMainWindow>
#include <QWidget>
#include <QGraphicsScene>
#include <QShortcut>
#include <QTimer>
#include <character.h>
#include <QRect>
#include <vector>

namespace Ui {
class GameScene;
}

class GameScene : public QWidget
{
    Q_OBJECT

public:
    explicit GameScene(QWidget *parent = 0);
    ~GameScene();


private:
    Ui::GameScene *ui;
    QGraphicsScene *scene;
    QTimer *timer;
    std::vector<Character*> characters;
    std::vector<QGraphicsItem*> graphicsItems;

};

#endif // GAMESCENE_H
