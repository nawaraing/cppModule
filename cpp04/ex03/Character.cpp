#include "Character.hpp"

Character::Character(std::string const name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->materia[i] = 0;
}
Character::Character(Character const & obj)
{
	*this = obj;
}
Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete this->materia[i];
}
Character & Character::operator=(Character const & obj)
{
	if (this == &obj)
		return *this;
	this->name = obj.getName();
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] != 0) delete this->materia[i];
		this->materia[i] = obj.materia[i]->clone();
	}
	return *this;
}
std::string const & Character::getName() const
{
	return this->name;
}
void Character::equip(AMateria* m)
{
	if (m == 0) return ;
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] == 0)
		{
			this->materia[i] = m;
			break ;
		}
	}
}
void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3) return ;
	this->materia[idx] = 0;
}
void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3) return ;
	if (this->materia[idx] == 0) return ;
	this->materia[idx]->use(target);
}
