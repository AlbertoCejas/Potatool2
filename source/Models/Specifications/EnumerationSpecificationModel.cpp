#include "EnumerationSpecificationModel.h"

const QString EnumerationSpecificationModel::TYPENAME = "ENUMERATION";
const unsigned int EnumerationSpecificationModel::DEFAULT_VALUE = 0u;


const char* EnumerationSpecificationModel::GetDefaultValue() const
{
	return enumeration.GetEntry(defaultValueIndex);
}
