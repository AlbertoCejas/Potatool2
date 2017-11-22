#include "PotatoolWindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);

    Potatool2Window potatoolWindow;
    potatoolWindow.showMaximized();

    return application.exec();
}
