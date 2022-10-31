#include "gamescene.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    GameScene gameScene;
    gameScene.show();

    return a.exec();
}
