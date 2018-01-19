#include "SpecificationDataBase.h"
#include "source/Core/Specification.h"
#include "source/Models/Specifications/IntegerSpecificationModel.h"
#include "source/Models/Specifications/DecimalSpecificationModel.h"
#include "source/Models/Specifications/StringSpecificationModel.h"
#include "source/Models/Specifications/EnumerationSpecificationModel.h"

const QString SpecificationDataBase::DEFAULT_TYPE = "DEFAULT_TYPE";
const QString SpecificationDataBase::CUSTOM_TYPE = "CUSTOM_TYPE";

SpecificationDataBase::SpecificationDataBase()
{

}

void SpecificationDataBase::Init()
{
	RegisterDefaultSpecifications();
}

void SpecificationDataBase::RegisterDefaultSpecifications()
{
	RegisterDefaultType<IntegerSpecificationModel>();
	RegisterDefaultType<DecimalSpecificationModel>();
	RegisterDefaultType<StringSpecificationModel>();
	RegisterDefaultType<EnumerationSpecificationModel>();
}
