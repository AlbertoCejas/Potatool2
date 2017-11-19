#include "Potatool.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);

    Potatool2 potatoolWindow;
    potatoolWindow.showMaximized();

    return application.exec();
}
