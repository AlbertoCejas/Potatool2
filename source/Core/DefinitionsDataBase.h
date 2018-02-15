#ifndef DATABASE_H
#define DATABASE_H

#include <QString>
#include <QVector>
#include <QMap>
#include "source/Core/DataBaseCollection.h"

/*
class Specification;
class Definition;

class DefinitionDataBase
{
	public:

		explicit DataBase();
		virtual ~DataBase();

		virtual void Init() = 0;

		bool Insert(const Specification& type, const QString& name, Definition& item);
		bool Contains(const QString& name) const;
		bool Contains(const Definition& item) const;
		const QVector<Definition*>* Get(const QString& name) const;
		bool Remove(const Specification& type, const QString& name, const Definition& item);
		void RemoveAll();

	protected:

		inline ulong GetNextAvailableIdAndIncrement() { return nextIdAvailable++; }

	private:

		ulong nextIdAvailable;

		QSet<Definition*> allDefinitions;
		QMap<QString, QVector<T*>> nameDefinitionMap;
		QMap<Specification*, QVector<T*>> specificationDefinitionMap;
};

template <typename T>
DataBase<T>::DataBase() : nextIdAvailable(0U) { }

template <typename T>
DataBase<T>::~DataBase()
{
	this->RemoveAll();
}

template <typename T>
bool DataBase<T>::Insert(const QString& type, const QString& name, T& item)
{
	if(allDefinitions.Contains(item))
	{
		return false;
	}

	allDefinitions.Insert(name, item);

	auto it = typeCollectionMap.find(type);
	if(it == typeCollectionMap.end())
	{
		typeCollectionMap.insert(type, DataBaseCollection<T>());
		it = typeCollectionMap.find(type);
	}
	return it->Insert(name, item);
}

template <typename T>
bool DataBase<T>::Contains(const QString& name) const
{
	return allDefinitions.Contains(name);
}

template <typename T>
bool DataBase<T>::Contains(const T& item) const
{
	return allDefinitions.Contains(item);
}

template <typename T>
const QVector<T*>* DataBase<T>::Get(const QString& name) const
{
	return allDefinitions.Get(name);
}

template <typename T>
bool DataBase<T>::Remove(const QString& type, const QString& name, const T& item)
{
	if(!allDefinitions.Contains(item))
	{
		return false;
	}

	auto it = typeCollectionMap.find(type);
	return it->Remove(name, item, false) && allDefinitions.Remove(name, item, true);
}

template <typename T>
void DataBase<T>::RemoveAll()
{
	allDefinitions.RemoveAll();
	typeCollectionMap.clear();
}

*/
#endif // DATABASE_H
