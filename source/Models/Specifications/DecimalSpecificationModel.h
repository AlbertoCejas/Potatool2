#ifndef DECIMALSPECIFICATIONMODEL_H
#define DECIMALSPECIFICATIONMODEL_H

#include <QString>
#include "source/Models/Specifications/BaseNumericalSpecificationModel.h"

class DecimalSpecificationModel: public BaseNumericalSpecificationModel<double>
{
	public:

        static const QString TYPENAME;
        static const double DEFAULT_VALUE;

		explicit DecimalSpecificationModel(double defaultValue);
		explicit DecimalSpecificationModel(double minValue, double maxValue, double defaultValue);
};

#endif // DECIMALSPECIFICATIONMODEL_H
