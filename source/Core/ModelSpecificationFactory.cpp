#include "ModelSpecificationFactory.h"
#include "source/Models/Specifications/IntegerSpecificationModel.h"
#include "source/Models/Specifications/DecimalSpecificationModel.h"
#include "source/Models/Specifications/StringSpecificationModel.h"


ModelSpecificationFactory::ModelSpecificationFactory()
	: factoryMap
	  {
		{ IntegerSpecificationModel::TYPENAME, &ModelSpecificationFactory::CreateIntegerModel },
		{ DecimalSpecificationModel::TYPENAME, &ModelSpecificationFactory::CreateDecimalModel },
		{ StringSpecificationModel::TYPENAME, &ModelSpecificationFactory::CreateStringModel }
	  }
{

}

SpecificationModel* ModelSpecificationFactory::CreateModel(const QString& modelName) const
{
	FactoryFunction function = factoryMap[modelName];
	return (this->*function)();
}

SpecificationModel* ModelSpecificationFactory::CreateIntegerModel() const
{
	return new IntegerSpecificationModel(0, 0);
}

SpecificationModel* ModelSpecificationFactory::CreateDecimalModel() const
{
	return new DecimalSpecificationModel(0.0, 0.0);
}

SpecificationModel* ModelSpecificationFactory::CreateStringModel() const
{
	return new StringSpecificationModel("", "");
}

