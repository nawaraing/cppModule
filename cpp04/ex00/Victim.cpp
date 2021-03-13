#include "Victim.hpp"

std::string		Victim::getName(void)
{
	return this->name;
}
void			Victim::setName(std::string name)
{
	this->name = name;
}
void			Victim::getPolymorphed(void) const
{
	std::cout << this->name << " has been turned into a cute little sheep!\n";
}
Victim::Victim(std::string name)
{
	this->name = name;
	std::cout << "Some random victim called " << this->name << " just appeared!\n";
}
Victim::Victim(Victim &obj)
{
	*this = obj;
}
Victim::~Victim()
{
	std::cout << "Victim " << this->name << " just died for no apparent reason!\n";
}
Victim &Victim::operator=(Victim &obj)
{
	this->name = obj.getName();
	return *this;
}
std::ostream &operator<<(std::ostream &out, Victim &obj)
{
	out << "I'm " << obj.getName() << " and I like otters!\n";
	return out;
}