#ifndef DATABASE_H
#define DATABASE_H

#include <QString>
#include <vector>
#include "Core/Specification.h"
#include "Core/DataBaseCollection.h"

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

		ulong nextSpecificationIdAvailable;

		DataBaseCollection<Specification> defaultSpecifications;
		DataBaseCollection<Specification> specifications;
};

#endif // DATABASE_H
