#ifndef POTATOOLWINDOW_H
#define POTATOOLWINDOW_H

#include <QMainWindow>
#include <QUndoStack>

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

		inline void SetPotatoolInstance(Potatool2* potatoolInstance) { this->potatoolInstance = potatoolInstance; }

	private:

		Potatool2* potatoolInstance;

		QUndoStack* undoStack;

		Ui::Potatool2 *ui;
};

#endif // POTATOOLWINDOW_H
