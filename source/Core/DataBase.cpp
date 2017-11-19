#include "DataBase.h"
#include "Core/Specification.h"
#include "Models/Specifications/IntegerSpecificationModel.h"


DataBase::DataBase() : nextSpecificationIdAvailable(0U)
{

}

void DataBase::Init()
{
	RegisterDefaultSpecifications();
}

void DataBase::RegisterDefaultSpecifications()
{
	defaultSpecifications.Insert
	(
		IntegerSpecificationModel::TYPENAME,
		*(new Specification(nextSpecificationIdAvailable++, IntegerSpecificationModel::TYPENAME, IntegerSpecificationModel::TYPENAME))
	);
}

bool DataBase::InsertSpecification(Specification& spec)
{
	return specifications.Insert(spec.GetName(), spec);
}

bool DataBase::ContainsSpecification(const QString& name) const
{
	return specifications.Contains(name);
}

const QVector<Specification*>* DataBase::GetSpecification(const QString& name) const
{
	return specifications.Get(name);
}

bool DataBase::RemoveSpecification(const Specification& spec)
{
	return specifications.Remove(spec.GetName(), spec);
}
