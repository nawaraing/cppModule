#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	type = "default";
}

ZombieEvent::~ZombieEvent()
{

}

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	return new Zombie(name, this->type);
}

Zombie	*ZombieEvent::randomChump(void)
{
	std::string		name;

	name = "Zombie" + std::to_string((size_t)&name % 10000);
	Zombie			*ret = new Zombie(name, this->type);
	ret->announce();
	return ret;
}