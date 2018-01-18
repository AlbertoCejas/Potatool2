#ifndef SPECIFICATIONDATABASE_H
#define SPECIFICATIONDATABASE_H

#include "source/Core/DataBase.h"
#include "source/Core/Specification.h"
#include <QString>

class SpecificationDataBase : public DataBase<Specification>
{
	public:

		SpecificationDataBase();

		void Init() override;

	private:

		void RegisterDefaultSpecifications();
		template<typename TYPE>
		void RegisterDefaultType();

		static const QString DEFAULT_TYPE;
		static const QString CUSTOM_TYPE;

};

template<typename TYPE>
void SpecificationDataBase::RegisterDefaultType()
{
	this->Insert(SpecificationDataBase::DEFAULT_TYPE, TYPE::TYPENAME, *(new Specification(GetNextAvailableIdAndIncrement(), TYPE::TYPENAME, TYPE::TYPENAME)));
}

#endif // SPECIFICATIONDATABASE_H
