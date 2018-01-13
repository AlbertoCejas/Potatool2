#include "Enumeration.h"
#include <cstring>
#include <limits>

bool Enumeration::Contains(const char* entryToQuery) const
{
	if(entryToQuery == nullptr)
		return false;

	for(const char* entry : entries)
	{
		if(strcmp(entry, entryToQuery) == 0)
		{
			return true;
		}
	}

	return false;
}

const char* Enumeration::GetEntry(unsigned int entryIndex) const
{
	if(entryIndex >= entries.size())
		return nullptr;

	return entries.at(entryIndex);
}

unsigned int Enumeration::GetEntryIndex(const char* entryToQuery) const
{
	if(entryToQuery == nullptr)
		return std::numeric_limits<unsigned int>::max();

	for(unsigned int i = 0u; i < entries.size(); i++)
	{
		if(strcmp(entries.at(i), entryToQuery) == 0)
		{
			return i;
		}
	}

	return std::numeric_limits<unsigned int>::max();
}


bool Enumeration::Add(const char* entry)
{
	if(entry == nullptr || Contains(entry))
		return false;

	entries.push_back(entry);

	return true;
}

bool Enumeration::Remove(const char* entry)
{
	if(entry == nullptr)
		return false;

	unsigned int entryIndex = GetEntryIndex(entry);
	if(entryIndex == std::numeric_limits<unsigned int>::max())
		return false;

	std::vector<const char*>::iterator iterator = entries.begin();
	std::advance(iterator, entryIndex);

	entries.erase(iterator);

	return true;
}
