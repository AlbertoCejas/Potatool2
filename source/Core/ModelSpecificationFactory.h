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

		template<typename Type>
		void AddType();

	private:

        typedef SpecificationModel* (ModelSpecificationFactory::*ConstructorFunctionPtr)() const;

        template<typename Type>
        SpecificationModel* CreateType() const;


        QMap<QString, ConstructorFunctionPtr> factoryMap;
};

template<typename Type>
void ModelSpecificationFactory::AddType()
{
    ConstructorFunctionPtr function = &CreateType<Type>;
	factoryMap.insert(Type::TYPENAME, function);
}

template<typename Type>
SpecificationModel* ModelSpecificationFactory::CreateType() const
{
	return new Type(Type::DEFAULT_VALUE);
}

#endif // SPECIFICATIONFACTORY_H
