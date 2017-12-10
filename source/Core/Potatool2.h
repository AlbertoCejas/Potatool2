#ifndef POTATOOL2_H
#define POTATOOL2_H

#include <QUndoStack>
#include "Source/Core/DataBase.h"
#include "source/Controllers/SpecificationController.h"

class Potatool2
{
	public:

		Potatool2();

	private:

        QUndoStack* undoStack;

		DataBase database;
		SpecificationController specificationController;
};

#endif // POTATOOL2_H
