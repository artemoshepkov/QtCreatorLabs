#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
        this->resize(800,800);
        this->setFixedSize(800,800);

        gamescene = new QGraphicsScene();
        object = new LeafObject();

        ui->graphicsView->setScene(gamescene);
        ui->graphicsView->setRenderHint(QPainter::Antialiasing);
        gamescene->setSceneRect(0,0,600,600);

        type[0] = 'r';
        type[1] = 'r';
        type[2] = 'r';

        gamescene->addLine(0,0, 600,0, QPen(Qt::black));
        gamescene->addLine(0, 600, 600, 600, QPen(Qt::black));
        gamescene->addLine(0,0,0, 600, QPen(Qt::black));
        gamescene->addLine( 600,0, 600, 600, QPen(Qt::black));
        gamescene->addItem(object);

        object->setPos(300,300);

        items[0] = new QGraphicsPixmapItem;
        items[1] = new QGraphicsRectItem;
        items[2] = new QGraphicsRectItem;
        items[3] = new QGraphicsEllipseItem;

        QPixmap pixmap;
        pixmap.load("train.png");
        items[0] = gamescene->addPixmap(pixmap);
        items[0]->setFlag(QGraphicsItem::ItemIsMovable);

        type[3] = 'r';

        QBrush brush(Qt::red);
        QPen pen(Qt::black);
        pen.setWidth(2);

        items[1] = gamescene->addRect(0,0,100,200,pen,brush);
        items[1]->setFlag(QGraphicsItem::ItemIsMovable);

        brush.setColor(Qt::green);
        pen.setColor(Qt::black);
        items[2] = gamescene->addRect(0,0,200,120,pen,brush);
        items[2]->setFlag(QGraphicsItem::ItemIsMovable);

        brush.setColor(Qt::blue);
        pen.setColor(Qt::black);

        items[3] = gamescene->addEllipse(0,0,100,100,pen,brush);
        items[3]->setFlag(QGraphicsItem::ItemIsMovable);

        w[0] = dynamic_cast<QGraphicsPixmapItem*>(items[0])->pixmap().width();
        w[1] = dynamic_cast<QGraphicsRectItem*>(items[1])->rect().width();
        w[2] = dynamic_cast<QGraphicsRectItem*>(items[2])->rect().width();
        w[3] = dynamic_cast<QGraphicsEllipseItem*>(items[3])->rect().width();
        h[0] = dynamic_cast<QGraphicsPixmapItem*>(items[0])->pixmap().height();
        h[1] = dynamic_cast<QGraphicsRectItem*>(items[1])->rect().height();
        h[2] = dynamic_cast<QGraphicsRectItem*>(items[2])->rect().height();
        h[3] = dynamic_cast<QGraphicsEllipseItem*>(items[3])->rect().height();

        timer = new QTimer();
        connect(timer, &QTimer::timeout, object, &LeafObject::slotCollisionBorder);
        connect(timer, SIGNAL(timeout()), this, SLOT(slotGameTimer()));
        timer->start(1000 / 500);
}

void MainWindow::slotGameTimer()
{
    for(int i = 0; i < 4; i++)
    {
        if (object->collidesWithItem(items[i]) == true)
        {
            object->SetPoint(items[i]->x(),items[i]->y(),w[i], h[i], type[i]);
            object->CollisionItem();
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
