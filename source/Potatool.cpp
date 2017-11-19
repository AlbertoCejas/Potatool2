#include "Potatool.h"
#include "ui_potatool.h"

Potatool2::Potatool2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Potatool2)
{
    ui->setupUi(this);
}

Potatool2::~Potatool2()
{
    delete ui;
}

void Potatool2::Init()
{
	database.Init();
}
