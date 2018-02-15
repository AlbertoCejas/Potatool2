#ifndef DATABASECOLLECTION_H
#define DATABASECOLLECTION_H

#include <QString>
#include <QMap>
#include <QSet>
#include <QVector>
/*
template<typename T>
class DataBaseCollection
{
	public:

		explicit DataBaseCollection();
		~DataBaseCollection();

		bool Insert(const QString& name, T& item);
		bool Contains(const QString& name) const;
		bool Contains(T& item) const;
		const QVector<T*>* Get(const QString& name) const;
		bool Remove(const QString& name, const T& item, bool free);
		void RemoveAll();

	private:

		QSet<T*> items;
		QMap<QString, QVector<T*>> nameItemMap;

};

template<typename T>
DataBaseCollection<T>::DataBaseCollection() { }

template<typename T>
DataBaseCollection<T>::~DataBaseCollection() { }

template<typename T>
bool DataBaseCollection<T>::Insert(const QString& name, T& item)
{
	auto itemsIt = items.find(&item);
	bool exists = itemsIt != items.end();

	if(!exists)
	{
		items.insert(&item);
		auto namesIt = nameItemMap.find(name);
		if(namesIt == nameItemMap.end())
		{
			nameItemMap.insert(name, QVector<T*>());
		}
		QVector<T*>& vector = nameItemMap[name];
		vector.push_back(&item);
	}

	return !exists;
}

template<typename T>
bool DataBaseCollection<T>::Contains(const QString& name) const
{
	auto namesIt = nameItemMap.find(name);
	return (namesIt != nameItemMap.end());
}

template<typename T>
bool DataBaseCollection<T>::Contains(T& item) const
{
	return items.find(&item) != items.end();
}

template<typename T>
const QVector<T*>* DataBaseCollection<T>::Get(const QString& name) const
{
	auto namesIt = nameItemMap.find(name);
	if(namesIt == nameItemMap.end())
	{
		return nullptr;
	}

	return &(*namesIt);
}

template<typename T>
bool DataBaseCollection<T>::Remove(const QString& name, const T& item, bool free)
{
	auto itemsIt = items.find(const_cast<T*>(&item));
	bool exists = itemsIt != items.end();

	if(exists)
	{
		items.erase(itemsIt);

		auto namesIt = nameItemMap.find(name);
		nameItemMap.erase(namesIt);

		if(free)
		{
			delete &item;
		}
	}

	return exists;
}

template <typename T>
void DataBaseCollection<T>::RemoveAll()
{
	for(auto item : items)
	{
		delete item;
	}

	items.clear();
	nameItemMap.clear();
}

*/
#endif // DATABASECOLLECTION_H
