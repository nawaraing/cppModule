#include "Peon.hpp"

void			Peon::getPolymorphed(void) const
{
	std::cout << this->name << " has been turned into a pink pony!\n";
}
Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog.\n";
}
Peon::Peon(Peon &co) : Victim(co.getName())
{
	std::cout << "Zog zog.\n";
}
Peon::~Peon()
{
	std::cout << "Bleuark...\n";
}
Peon &Peon::operator=(Peon &obj)
{
	this->name = obj.getName();
	return *this;
}
std::ostream &operator<<(std::ostream &out, Peon &obj)
{
	out << "I'm " << obj.getName() << " and I like otters!\n";
	return out;
}