#include "DataBase.h"
#include "source/Core/Specification.h"
#include "source/Models/Specifications/IntegerSpecificationModel.h"
#include "source/Models/Specifications/DecimalSpecificationModel.h"
#include "source/Models/Specifications/StringSpecificationModel.h"
#include "source/Models/Specifications/EnumerationSpecificationModel.h"


DataBase::DataBase() : nextSpecificationIdAvailable(0U)
{

}

void DataBase::Init()
{
	RegisterDefaultSpecifications();
}

void DataBase::RegisterDefaultSpecifications()
{
	RegisterDefaultType<IntegerSpecificationModel>();
	RegisterDefaultType<DecimalSpecificationModel>();
	RegisterDefaultType<StringSpecificationModel>();
	RegisterDefaultType<EnumerationSpecificationModel>();
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
