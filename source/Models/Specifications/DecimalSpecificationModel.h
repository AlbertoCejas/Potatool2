#ifndef DECIMALSPECIFICATIONMODEL_H
#define DECIMALSPECIFICATIONMODEL_H

#include <QString>
#include "Models/Specifications/BaseNumericalSpecificationModel.h"

class DecimalSpecificationModel: public BaseNumericalSpecificationModel<double>
{
	public:

		static QString TYPENAME;

		explicit DecimalSpecificationModel(double value, double defaultValue);
};

#endif // DECIMALSPECIFICATIONMODEL_H
