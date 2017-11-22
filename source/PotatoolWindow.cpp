#include "PotatoolWindow.h"
#include "ui_potatool.h"

Potatool2Window::Potatool2Window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Potatool2)
{
    ui->setupUi(this);
}

Potatool2Window::~Potatool2Window()
{
    delete ui;
}

void Potatool2Window::Init()
{

}
