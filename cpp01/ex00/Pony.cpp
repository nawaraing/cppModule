#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony	*ptr = new Pony("Heap pony");

	std::cout << "I'm " << ptr->getName() << "\n";
	delete(ptr);
	std::cout << "Delete DYNAMIC object\n";
}

void	ponyOnTheStack(void)
{
	Pony	obj("Stack pony");

	std::cout << "I'm " << obj.getName() << "\n";
	std::cout << "Delete STATIC object\n";
}

std::string		Pony::getName(void)
{
	return this->name;
}