#ifndef DATABASE_H
#define DATABASE_H

#include <QString>
#include <QVector>
#include <QMap>
#include "source/Core/DataBaseCollection.h"

template <typename T>
class DataBase
{
	public:

		explicit DataBase();
		virtual ~DataBase();

		virtual void Init() = 0;

		bool Insert(const QString& type, const QString& name, T& item);
		bool Contains(const QString& name) const;
		const QVector<T*>* Get(const QString& name) const;
		bool Remove(const QString& type, const QString& name, const T& item);

	protected:

		inline ulong GetNextAvailableIdAndIncrement() { return nextIdAvailable++; }

	private:

		ulong nextIdAvailable;
		DataBaseCollection<T> allItems;
		QMap<QString, DataBaseCollection<T>> typeCollectionMap;
};

template <typename T>
DataBase<T>::DataBase() : nextIdAvailable(0U) { }

template <typename T>
DataBase<T>::~DataBase()
{
	allItems.RemoveAll();
}

template <typename T>
bool DataBase<T>::Insert(const QString& type, const QString& name, T& item)
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
bool DataBase<T>::Contains(const QString& name) const
{
	return allItems.Contains(name);
}

template <typename T>
const QVector<T*>* DataBase<T>::Get(const QString& name) const
{
	return allItems.Get(name);
}

template <typename T>
bool DataBase<T>::Remove(const QString& type, const QString& name, const T& item)
{
	if(!allItems.Contains(item))
	{
		return false;
	}

	auto it = typeCollectionMap.find(type);
	return it->Remove(name, item, false) && allItems.Remove(name, item, true);
}


#endif // DATABASE_H
