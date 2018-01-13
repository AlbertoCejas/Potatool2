#ifndef POTATOOL2_H
#define POTATOOL2_H

#include <QUndoStack>
#include "source/Controllers/SpecificationController.h"

class Potatool2
{
	public:

		Potatool2();

	private:

        QUndoStack* undoStack;

		SpecificationController specificationController;
};

#endif // POTATOOL2_H
