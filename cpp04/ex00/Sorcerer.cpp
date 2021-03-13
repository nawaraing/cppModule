#include "Sorcerer.hpp"


std::string		Sorcerer::getName(void)
{
	return this->name;
}
std::string		Sorcerer::getTitle(void)
{
	return this->title;
}
void			Sorcerer::setName(std::string name)
{
	this->name = name;
}
void			Sorcerer::setTitle(std::string title)
{
	this->title = title;
}
void 			Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}
Sorcerer::Sorcerer(std::string name, std::string title)
{
	this->name = name;
	this->title = title;
	std::cout << this->name << ", " << this->title << ", is born!\n";
}
Sorcerer::Sorcerer(Sorcerer &obj)
{
	*this = obj;
}
Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same!\n";
}
Sorcerer &Sorcerer::operator=(Sorcerer &obj)
{
	this->name = obj.getName();
	this->title = obj.getTitle();
	return *this;
}
std::ostream &operator<<(std::ostream &out, Sorcerer &obj)
{
	out << "I am " << obj.getName() << ", " << obj.getTitle() << ", and I like ponies!\n";
	return out;
}