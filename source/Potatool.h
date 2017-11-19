#ifndef POTATOOL_H
#define POTATOOL_H

#include <QMainWindow>
#include "Core/DataBase.h"

namespace Ui
{
	class Potatool2;
}

class Potatool2 : public QMainWindow
{
    Q_OBJECT

	public:
		explicit Potatool2(QWidget *parent = 0);
		~Potatool2();

		void Init();

	private:

		Ui::Potatool2 *ui;
		DataBase database;
};

#endif // POTATOOL_H
