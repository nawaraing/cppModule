#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	this->name = name;
	this->apcost = apcost;
	this->damage = damage;
}
AWeapon::AWeapon(AWeapon &obj)
{
	*this = obj;
}
AWeapon::~AWeapon()
{

}
std::string const AWeapon::getName() const
{
	return this->name;
}
int AWeapon::getAPCost() const
{
	return this->apcost;
}
int AWeapon::getDamage() const
{
	return this->damage;
}
AWeapon const &AWeapon::operator=(AWeapon const &obj)
{
	this->name = obj.name;
	this->apcost = obj.apcost;
	this->damage = obj.damage;
	return *this;
}
