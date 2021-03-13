#include "Character.hpp"

Character::Character(std::string const & name)
{
	this->name = name;
	this->ap = 40;
}
Character::Character(Character const & obj)
{
	*this = obj;
}
Character::~Character()
{

}
void Character::recoverAP()
{
	if (this->ap > 30)
		this->ap = 40;
	else
		this->ap += 10;
}
void Character::equip(AWeapon *weapon)
{
	this->weapon = weapon;
}
void Character::attack(Enemy *enemy)
{
	if (this->weapon == NULL)
		return ;
	if (ap > this->weapon->getAPCost())
	{
		this->ap -= this->weapon->getAPCost();
		std::cout << this->name << " attacks " << enemy->getType() << " with a " << this->weapon->getName() << "\n";
		this->getWeapon()->attack();
		enemy->takeDamage(this->weapon->getDamage());
		if (enemy->getHP() <= 0)
			delete enemy;
	}
}
std::string const Character::getName() const
{
	return this->name;
}
int Character::getAP() const
{
	return this->ap;
}
AWeapon * Character::getWeapon() const
{
	return this->weapon;
}
Character const & Character::operator=(Character const & obj)
{
	this->name = obj.name;
	this->ap = obj.ap;
	this->weapon = obj.weapon;
	return (*this);
}

std::ostream & operator<<(std::ostream &out, Character const & obj)
{
	if (obj.getWeapon() != NULL)
		out << obj.getName() << " has " << obj.getAP() << " AP and wields a " << obj.getWeapon()->getName() << "\n";
	else
		out << obj.getName() << " has " << obj.getAP() << " AP and is unarmed\n";
	return out;
}
