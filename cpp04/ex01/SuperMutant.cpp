#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!\n";
}
SuperMutant::SuperMutant(SuperMutant const & obj) : Enemy(obj)
{
	std::cout << "Gaaah. Me want smash heads!\n";
}
SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh...\n";
}
void	SuperMutant::takeDamage(int dmg)
{
	if (dmg - 3 < 0) return ;
	Enemy::takeDamage(dmg - 3);
}
SuperMutant const & SuperMutant::operator=(SuperMutant const & obj)
{
	Enemy::operator=(obj);
	return *this;
}
