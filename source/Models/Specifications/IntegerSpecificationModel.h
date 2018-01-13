#ifndef INTEGERSPECIFICATIONMODEL_H
#define INTEGERSPECIFICATIONMODEL_H

#include <QString>
#include "source/Models/Specifications/BaseNumericalSpecificationModel.h"

class IntegerSpecificationModel : public BaseNumericalSpecificationModel<int>
{
	public:

        static const QString TYPENAME;
        static const int DEFAULT_VALUE;

		explicit IntegerSpecificationModel(int defaultValue);
		explicit IntegerSpecificationModel(int minValue, int maxValue, int defaultValue);
};

#endif // INTEGERSPECIFICATIONMODEL_H
