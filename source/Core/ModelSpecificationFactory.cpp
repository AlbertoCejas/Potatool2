#include "ModelSpecificationFactory.h"
#include "Models/Specifications/IntegerSpecificationModel.h"
#include "Models/Specifications/DecimalSpecificationModel.h"

ModelSpecificationFactory::ModelSpecificationFactory()
	: factoryMap
	  {
		{ IntegerSpecificationModel::TYPENAME, &ModelSpecificationFactory::CreateIntegerModel },
		{ DecimalSpecificationModel::TYPENAME, &ModelSpecificationFactory::CreateDecimalModel }
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
	return new DecimalSpecificationModel(0, 0);
}
