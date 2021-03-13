#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	this->_xp = 0;
	this->type = type;
}
AMateria::AMateria(AMateria const & obj)
{
	*this = obj;
}
AMateria::~AMateria()
{

}
AMateria & AMateria::operator=(AMateria const & obj)
{
	if (this == &obj)
		return *this = obj;
	this->_xp = obj.getXP();
	this->type = obj.getType();
	return *this;
}
std::string const & AMateria::getType() const //Returns the materia type
{
	return this->type;
}
unsigned int AMateria::getXP() const //Returns the Materia's XP
{
	return this->_xp;
}
void AMateria::use(ICharacter&)
{
	this->_xp += 10;
}
