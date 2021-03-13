#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{

}
PlasmaRifle::PlasmaRifle(PlasmaRifle &obj) : AWeapon(obj)
{

}
PlasmaRifle::~PlasmaRifle()
{

}
void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *\n";
}
PlasmaRifle const &PlasmaRifle::operator=(PlasmaRifle &obj)
{
	return obj;
}
