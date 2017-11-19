#include "Specification.h"
#include "SpecificationModel.h"

ModelSpecificationFactory Specification::modelFactory;

Specification::Specification(ulong id, const QString& name) : id(id), name(name), model(nullptr) { }

Specification::Specification(ulong id, const QString& name, const QString& modelName) : id(id), name(name), model(nullptr)
{
	model = modelFactory.CreateModel(modelName);
}

void Specification::SetModel(const QString& modelName)
{
	if(model != nullptr)
	{
		delete model;
	}

	model = modelFactory.CreateModel(modelName);
}
