#include "IntegerSpecificationModel.h"

const QString IntegerSpecificationModel::TYPENAME = "INTEGER";
const int IntegerSpecificationModel::DEFAULT_VALUE = 0;

IntegerSpecificationModel::IntegerSpecificationModel(int minValue, int value, int maxValue, int defaultValue)
	: BaseNumericalSpecificationModel(minValue, value, maxValue, defaultValue)
{

}

IntegerSpecificationModel::IntegerSpecificationModel(int value, int defaultValue)
	: BaseNumericalSpecificationModel(value, defaultValue)
{

}
