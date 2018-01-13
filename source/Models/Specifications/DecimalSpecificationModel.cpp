#include "DecimalSpecificationModel.h"

const QString DecimalSpecificationModel::TYPENAME = "DECIMAL";
const double DecimalSpecificationModel::DEFAULT_VALUE = 0.0;

DecimalSpecificationModel::DecimalSpecificationModel(double defaultValue)
	: BaseNumericalSpecificationModel(defaultValue)
{

}


DecimalSpecificationModel::DecimalSpecificationModel(double minValue, double maxValue, double defaultValue)
	: BaseNumericalSpecificationModel(minValue, maxValue, defaultValue)
{

}
