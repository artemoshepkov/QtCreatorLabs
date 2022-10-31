#include "gamescene.h"
#include "ui_gamescene.h"

GameScene::GameScene(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GameScene)
{
    ui->setupUi(this);

    this->resize(600, 600);
    this->setFixedSize(600, 600);

    scene = new QGraphicsScene();
    characters.push_back(new Character());

    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    scene->setSceneRect(-250, -250, 500, 500);

    scene->addLine(-250,-250, 250,-250, QPen(Qt::black));
    scene->addLine(-250, 250, 250, 250, QPen(Qt::black));
    scene->addLine(-250,-250,-250, 250, QPen(Qt::black));
    scene->addLine( 250,-250, 250, 250, QPen(Qt::black));

    graphicsItems.push_back(new QGraphicsRectItem);
    graphicsItems.push_back(new QGraphicsRectItem);
    graphicsItems.push_back(new QGraphicsPixmapItem);

    QBrush brush(Qt::green);
    QPen pen(Qt::black);
    pen.setWidth(2);

    graphicsItems.at(0) = scene->addRect(0, 0, 200, 120, pen, brush);
    graphicsItems.at(0)->setFlag(QGraphicsItem::ItemIsMovable);

    graphicsItems.at(1) = scene->addEllipse(0, 0, 200, 120, pen, brush);
    graphicsItems.at(1)->setFlag(QGraphicsItem::ItemIsMovable);

    QPixmap pixmap;
    pixmap.load("tree.png");
    graphicsItems.at(2) = scene->addPixmap(pixmap);
    graphicsItems.at(2)->setFlag(QGraphicsItem::ItemIsMovable);

    foreach (auto *item, characters)
        scene->addItem(item);

    foreach (auto *item, characters)
        item->setPos(0, 0);

    timer = new QTimer();

    foreach (auto *item, characters)
        connect(timer, &QTimer::timeout, item, &Character::slotGameTimer);

    timer->start(1000 / 200);
}

GameScene::~GameScene()
{
    delete ui;
}
