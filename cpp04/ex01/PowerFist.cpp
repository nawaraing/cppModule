#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{

}
PowerFist::PowerFist(PowerFist &obj) : AWeapon(obj)
{

}
PowerFist::~PowerFist()
{

}
void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *\n";
}
PowerFist const &PowerFist::operator=(PowerFist const &obj)
{
	AWeapon::operator=(obj);
	return *this;
}
