#include "IntegerSpecificationModel.h"

const QString IntegerSpecificationModel::TYPENAME = "INTEGER";
const int IntegerSpecificationModel::DEFAULT_VALUE = 0;

IntegerSpecificationModel::IntegerSpecificationModel(int minValue, int maxValue, int defaultValue)
	: BaseNumericalSpecificationModel(minValue, maxValue, defaultValue)
{

}

IntegerSpecificationModel::IntegerSpecificationModel(int defaultValue)
	: BaseNumericalSpecificationModel(defaultValue)
{

}
