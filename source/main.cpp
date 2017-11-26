#include "PotatoolWindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);

	Potatool2 potatool2;

    Potatool2Window potatoolWindow;
    potatoolWindow.showMaximized();

	potatoolWindow.setPotatoolInstance(potatool2);

    return application.exec();
}
