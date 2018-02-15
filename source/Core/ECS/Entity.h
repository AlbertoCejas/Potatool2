#ifndef ENTITY_H
#define ENTITY_H

#include <vector>

class Component;

class Entity
{
	public:

		explicit Entity(ulong id);
		~Entity();

		inline ulong GetID() const { return this->id; }


	private:

		ulong id;
		std::vector<Component*> components;


}

#endif // ENTITY_H
