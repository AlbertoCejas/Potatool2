#include "ModelSpecificationFactory.h"
#include "source/Models/Specifications/IntegerSpecificationModel.h"
#include "source/Models/Specifications/DecimalSpecificationModel.h"
#include "source/Models/Specifications/StringSpecificationModel.h"


ModelSpecificationFactory::ModelSpecificationFactory()
{
    AddType<IntegerSpecificationModel>(IntegerSpecificationModel::TYPENAME);
    AddType<StringSpecificationModel>(StringSpecificationModel::TYPENAME);
    AddType<DecimalSpecificationModel>(DecimalSpecificationModel::TYPENAME);
}

SpecificationModel* ModelSpecificationFactory::CreateModel(const QString& modelName) const
{
    ConstructorFunctionPtr function = factoryMap[modelName];
	return (this->*function)();
}

