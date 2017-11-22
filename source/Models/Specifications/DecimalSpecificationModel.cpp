#include "DecimalSpecificationModel.h"

QString DecimalSpecificationModel::TYPENAME = "DECIMAL";

DecimalSpecificationModel::DecimalSpecificationModel(double value, double defaultValue)
	: BaseNumericalSpecificationModel(value, defaultValue)
{

}


DecimalSpecificationModel::DecimalSpecificationModel(double minValue, double value, double maxValue, double defaultValue)
	: BaseNumericalSpecificationModel(minValue, value, maxValue, defaultValue)
{

}
