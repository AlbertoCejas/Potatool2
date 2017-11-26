#ifndef POTATOOL2_H
#define POTATOOL2_H

#include "Source/Core/DataBase.h"
#include "source/Controllers/SpecificationController.h"

class Potatool2
{
	public:

		Potatool2();

	private:

		DataBase database;
		SpecificationController specificationController;
};

#endif // POTATOOL2_H
