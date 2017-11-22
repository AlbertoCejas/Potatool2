#ifndef DATABASE_H
#define DATABASE_H

#include <QString>
#include <QVector>
#include "source/Core/Specification.h"
#include "source/Core/DataBaseCollection.h"

class DataBase
{
	public:

		DataBase();

		void Init();

		bool InsertSpecification(Specification& spec);
		bool ContainsSpecification(const QString& name) const;
		const QVector<Specification*>* GetSpecification(const QString& name) const;
		bool RemoveSpecification(const Specification& spec);

	private:

		void RegisterDefaultSpecifications();
		template<typename TYPE>
		void RegisterDefaultType();

		ulong nextSpecificationIdAvailable;

		DataBaseCollection<Specification> defaultSpecifications;
		DataBaseCollection<Specification> specifications;
};

template<typename TYPE>
void DataBase::RegisterDefaultType()
{
	defaultSpecifications.Insert
	(
		TYPE::TYPENAME,
		*(new Specification(nextSpecificationIdAvailable++, TYPE::TYPENAME, TYPE::TYPENAME))
	);
}

#endif // DATABASE_H
