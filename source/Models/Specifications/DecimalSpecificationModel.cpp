#include "DecimalSpecificationModel.h"

const QString DecimalSpecificationModel::TYPENAME = "DECIMAL";
const double DecimalSpecificationModel::DEFAULT_VALUE = 0.0;

DecimalSpecificationModel::DecimalSpecificationModel(double value, double defaultValue)
	: BaseNumericalSpecificationModel(value, defaultValue)
{

}


DecimalSpecificationModel::DecimalSpecificationModel(double minValue, double value, double maxValue, double defaultValue)
	: BaseNumericalSpecificationModel(minValue, value, maxValue, defaultValue)
{

}
