#include "HumanB.hpp"

void	HumanB::attack()
{
	std::cout << this->name + " attacks with his " + this->weapon->getType() << "\n";
}
void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
HumanB::HumanB(std::string name)
{
	this->name = name;
}
HumanB::~HumanB()
{

}
