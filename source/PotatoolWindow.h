#ifndef POTATOOLWINDOW_H
#define POTATOOLWINDOW_H

#include <QMainWindow>

namespace Ui
{
	class Potatool2;
}

class Potatool2Window : public QMainWindow
{
    Q_OBJECT

	public:
		explicit Potatool2Window(QWidget *parent = 0);
		~Potatool2Window();

		void Init();

	private:

		Ui::Potatool2 *ui;
};

#endif // POTATOOLWINDOW_H
