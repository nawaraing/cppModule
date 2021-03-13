#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{

}
Cure::Cure(std::string const & type) : AMateria(type)
{

}
Cure::Cure(Cure const & obj) : AMateria(obj)
{

}
Cure::~Cure()
{

}
Cure & Cure::operator=(Cure const & obj)
{
	if (&obj == this)
		return *this;
	return *this;
}
Cure* Cure::clone() const
{
	return new Cure(*this);
}
void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
