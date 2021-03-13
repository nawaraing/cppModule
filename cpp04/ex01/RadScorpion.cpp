#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout <<  "* click click click *\n";
}
RadScorpion::RadScorpion(RadScorpion const & obj) : Enemy(obj)
{
	std::cout <<  "* click click click *\n";
}
RadScorpion::~RadScorpion()
{
	std::cout <<  "* SPROTCH *\n";
}
void	RadScorpion::takeDamage(int dmg)
{
	if (dmg < 0) return ;
	Enemy::takeDamage(dmg);
}
RadScorpion const & RadScorpion::operator=(RadScorpion const & obj)
{
	Enemy::operator=(obj);
	return *this;
}
