#ifndef INTEGERSPECIFICATIONMODEL_H
#define INTEGERSPECIFICATIONMODEL_H

#include <QString>
#include "source/Models/Specifications/BaseNumericalSpecificationModel.h"

class IntegerSpecificationModel : public BaseNumericalSpecificationModel<int>
{
	public:

		static QString TYPENAME;

		explicit IntegerSpecificationModel(int value, int defaultValue);
		explicit IntegerSpecificationModel(int minValue, int value, int maxValue, int defaultValue);
};

#endif // INTEGERSPECIFICATIONMODEL_H
