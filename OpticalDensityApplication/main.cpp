#include "OpticalDensityApplication.h"
#include <QtWidgets/QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    OpticalDensityApplication w;
    w.show();
    return a.exec();
}
