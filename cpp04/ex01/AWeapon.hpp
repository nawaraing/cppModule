#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <string>
#include <iostream>

class AWeapon
{
private:
	std::string		name;
	int				damage;
	int				apcost;
public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon &obj);
	virtual ~AWeapon();
	std::string const getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
	AWeapon const &operator=(AWeapon const &obj);
};

#endif