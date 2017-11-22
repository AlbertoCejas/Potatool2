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

		template <typename T>
		SpecificationModel* CreateModel(const QString& modelName) const;

	private:

		typedef SpecificationModel* (ModelSpecificationFactory::*FactoryFunction)() const;

		SpecificationModel* CreateIntegerModel() const;
		SpecificationModel* CreateDecimalModel() const;
		SpecificationModel* CreateStringModel() const;


		QMap<QString, FactoryFunction> factoryMap;
};

template <typename T>
SpecificationModel* ModelSpecificationFactory::CreateModel() const
{
	return new T(T::DEFAULT_VALUE, T::DEFAULT_VALUE);
}

#endif // SPECIFICATIONFACTORY_H
