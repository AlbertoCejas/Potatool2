#ifndef ENUMERATION_H
#define ENUMERATION_H

#include <vector>

class Enumeration
{
	public:

		bool Contains(const char* entryToQuery) const;
		const char* GetEntry(unsigned int entryIndex) const;
		unsigned int GetEntryIndex(const char* entryToQuery) const;

		bool Add(const char* entry);
		bool Remove(const char* entry);

	private:

		std::vector<const char*> entries;
};

#endif // ENUMERATION_H
