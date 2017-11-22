#include "IntegerSpecificationModel.h"

QString IntegerSpecificationModel::TYPENAME = "INTEGER";

IntegerSpecificationModel::IntegerSpecificationModel(int minValue, int value, int maxValue, int defaultValue)
	: BaseNumericalSpecificationModel(minValue, value, maxValue, defaultValue)
{

}

IntegerSpecificationModel::IntegerSpecificationModel(int value, int defaultValue)
	: BaseNumericalSpecificationModel(value, defaultValue)
{

}
