#include "PotatoolWindow.h"
#include "source/Core/Potatool2.h"
#include "source/PotatoolWindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);

	Potatool2 potatool2;

    Potatool2Window potatoolWindow;
    potatoolWindow.showMaximized();
    potatoolWindow.SetPotatoolInstance(potatool2);

    return application.exec();
}
