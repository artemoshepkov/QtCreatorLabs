#include <QApplication>
#include <sdiprogram_oshepkov_artem.h>

void loadModules(QSplashScreen* pSplash)
{
    QTime time;

    time.start();
    for (int i = 0; i < 100; )
    {
        if (time.elapsed() > 40)
        {
            time.start();
            i++;
        }

        pSplash->showMessage("Loading modules: "
                             + QString::number(i) + "%",
                             Qt::AlignCenter | Qt::AlignCenter,
                             Qt::black
                             );

        qApp->processEvents();
    }
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSplashScreen splash(QPixmap("D:\\Universitet\\VisualProg\\build-ThirdLab-Desktop_Qt_5_10_0_MinGW_32bit-Debug\\debug\\splash.jpg"));
    SDIProgram_oshepkov w;

    splash.show();
    loadModules(&splash);
    splash.finish(&w);

    w.show();

    return a.exec();
}
