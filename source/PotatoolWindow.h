#ifndef POTATOOLWINDOW_H
#define POTATOOLWINDOW_H

#include <QMainWindow>

class Potatool2;

namespace Ui
{
    class Potatool2UI;
}

class Potatool2Window : public QMainWindow
{
    Q_OBJECT

	public:
		explicit Potatool2Window(QWidget *parent = 0);
		~Potatool2Window();

		void Init();

        inline void SetPotatoolInstance(Potatool2& potatoolInstance) { this->potatoolInstance = &potatoolInstance; }

	private:

        Potatool2* potatoolInstance;

        Ui::Potatool2UI *ui;
};

#endif // POTATOOLWINDOW_H
