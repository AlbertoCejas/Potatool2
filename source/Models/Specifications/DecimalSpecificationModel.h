#ifndef DECIMALSPECIFICATIONMODEL_H
#define DECIMALSPECIFICATIONMODEL_H

#include <QString>
#include "source/Models/Specifications/BaseNumericalSpecificationModel.h"

class DecimalSpecificationModel: public BaseNumericalSpecificationModel<double>
{
	public:

		static QString TYPENAME;

		explicit DecimalSpecificationModel(double value, double defaultValue);
		explicit DecimalSpecificationModel(double minValue, double value, double maxValue, double defaultValue);
};

#endif // DECIMALSPECIFICATIONMODEL_H
