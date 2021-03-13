#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{

}
Ice::Ice(std::string const & type) : AMateria(type)
{

}
Ice::Ice(Ice const & obj) : AMateria(obj)
{

}
Ice::~Ice()
{

}
Ice & Ice::operator=(Ice const & obj)
{
	if (&obj == this)
		return *this;
	return *this;
}
Ice* Ice::clone() const
{
	return new Ice(*this);
}
void Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
