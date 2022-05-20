#include "OpticalDensityApplication.h"
#include <QtWidgets/QApplication>


int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QApplication a(argc, argv);
    a.setHighDpiScaleFactorRoundingPolicy(Qt::HighDpiScaleFactorRoundingPolicy::PassThrough);

    OpticalDensityApplication w;

    QScreen* screen = QGuiApplication::primaryScreen();
    QRect  screenGeometry = screen->geometry();

    auto c = screen->size();
    auto b = screen->virtualSize();
    // w.resize(screenGeometry.width() * 0.7, screenGeometry.height() * 0.3);
    w.show();
    // w.move(0, 0);
    return a.exec();
}
