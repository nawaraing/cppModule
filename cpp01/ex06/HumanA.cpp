#include "HumanA.hpp"

void	HumanA::attack()
{
	std::cout << this->name + " attacks with his " + this->weapon.getType() << "\n";
}
HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
	this->name = name;
}
HumanA::~HumanA()
{

}
