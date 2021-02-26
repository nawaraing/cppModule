#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "default";
	this->type = "default";
}

Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
}

Zombie::~Zombie()
{

}

void	Zombie::announce(void)
{
	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss...\n";
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}
