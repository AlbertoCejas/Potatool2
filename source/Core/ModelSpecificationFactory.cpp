#include "ModelSpecificationFactory.h"
#include "source/Models/Specifications/IntegerSpecificationModel.h"
#include "source/Models/Specifications/DecimalSpecificationModel.h"
#include "source/Models/Specifications/StringSpecificationModel.h"
#include "source/Models/Specifications/EnumerationSpecificationModel.h"


ModelSpecificationFactory::ModelSpecificationFactory()
{
	AddType<IntegerSpecificationModel>();
	AddType<StringSpecificationModel>();
	AddType<DecimalSpecificationModel>();
	AddType<EnumerationSpecificationModel>();
}

SpecificationModel* ModelSpecificationFactory::CreateModel(const QString& modelName) const
{
    ConstructorFunctionPtr function = factoryMap[modelName];
	return (this->*function)();
}

