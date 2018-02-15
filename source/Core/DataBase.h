#ifndef DATABASE_H
#define DATABASE_H

#include <QString>
#include <QVector>
#include <QMap>
#include "source/Core/DataBaseCollection.h"

/*
class SpecificationDataBase
{
	public:

		explicit SpecificationDataBase();
		virtual ~SpecificationDataBase();

		virtual void Init() = 0;

		bool Insert(const QString& type, const QString& name, T& item);
		bool Contains(const QString& name) const;
		bool Contains(const T& item) const;
		const QVector<T*>* Get(const QString& name) const;
		bool Remove(const QString& type, const QString& name, const T& item);
		void RemoveAll();

	protected:

		inline ulong GetNextAvailableIdAndIncrement() { return nextIdAvailable++; }

	private:

		ulong nextIdAvailable;

		QSet<T*> allItems;
		QMap<QString, QVector<T*>> nameItemMap;
};

template <typename T>
SpecificationDataBase<T>::SpecificationDataBase() : nextIdAvailable(0U) { }

template <typename T>
SpecificationDataBase<T>::~SpecificationDataBase()
{
	this->RemoveAll();
}

template <typename T>
bool SpecificationDataBase<T>::Insert(const QString& type, const QString& name, T& item)
{
	if(allItems.Contains(item))
	{
		return false;
	}

	allItems.Insert(name, item);

	auto it = typeCollectionMap.find(type);
	if(it == typeCollectionMap.end())
	{
		typeCollectionMap.insert(type, DataBaseCollection<T>());
		it = typeCollectionMap.find(type);
	}
	return it->Insert(name, item);
}

template <typename T>
bool SpecificationDataBase<T>::Contains(const QString& name) const
{
	return allItems.Contains(name);
}

template <typename T>
bool SpecificationDataBase<T>::Contains(const T& item) const
{
	return allItems.Contains(item);
}

template <typename T>
const QVector<T*>* DataBase<T>::Get(const QString& name) const
{
	return allItems.Get(name);
}

template <typename T>
bool SpecificationDataBase<T>::Remove(const QString& type, const QString& name, const T& item)
{
	if(!allItems.Contains(item))
	{
		return false;
	}

	auto it = typeCollectionMap.find(type);
	return it->Remove(name, item, false) && allItems.Remove(name, item, true);
}

template <typename T>
void SpecificationDataBase<T>::RemoveAll()
{
	allItems.RemoveAll();
	typeCollectionMap.clear();
}

*/
#endif // DATABASE_H
