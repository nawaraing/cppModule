#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int num)
{
	this->num = num;
	this->zombie = new Zombie[num];
	srand(time(0));
	for (int i = 0; i < num; i++)
		this->zombie[i].set_name("Zombie" + std::to_string(rand() % 10000));
}

ZombieHorde::~ZombieHorde()
{
	delete []this->zombie;
}

void	ZombieHorde::announce(void)
{
	for (int i = 0; i < this->num; i++)
		this->zombie[i].announce();
}
