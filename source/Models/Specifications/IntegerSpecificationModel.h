#ifndef INTEGERSPECIFICATIONMODEL_H
#define INTEGERSPECIFICATIONMODEL_H

#include <QString>
#include "Models/Specifications/BaseNumericalSpecificationModel.h"

class IntegerSpecificationModel : public BaseNumericalSpecificationModel<int>
{
	public:

		static QString TYPENAME;

		explicit IntegerSpecificationModel(int value, int defaultValue);
};

#endif // INTEGERSPECIFICATIONMODEL_H
