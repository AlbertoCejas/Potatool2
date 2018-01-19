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
		bool Contains(const T& item) const;
		const QVector<T*>* Get(const QString& name) const;
		bool Remove(const QString& type, const QString& name, const T& item);
		void RemoveAll();

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
	this->RemoveAll();
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
bool DataBase<T>::Contains(const T& item) const
{
	return allItems.Contains(item);
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

template <typename T>
void DataBase<T>::RemoveAll()
{
	allItems.RemoveAll();
	typeCollectionMap.clear();
}


#endif // DATABASE_H
