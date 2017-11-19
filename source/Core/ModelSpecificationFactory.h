#ifndef SPECIFICATIONFACTORY_H
#define SPECIFICATIONFACTORY_H

#include <QString>
#include <QMap>

class SpecificationModel;

class ModelSpecificationFactory
{
	public:

		explicit ModelSpecificationFactory();
		SpecificationModel* CreateModel(const QString& modelName) const;

	private:

		typedef SpecificationModel* (ModelSpecificationFactory::*FactoryFunction)() const;

		SpecificationModel* CreateIntegerModel() const;
		SpecificationModel* CreateDecimalModel() const;


		QMap<QString, FactoryFunction> factoryMap;
};

#endif // SPECIFICATIONFACTORY_H
