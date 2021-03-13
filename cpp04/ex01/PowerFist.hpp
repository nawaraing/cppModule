#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	PowerFist();
	PowerFist(PowerFist &obj);
	virtual ~PowerFist();
	void attack() const;
	PowerFist const &operator=(PowerFist const &obj);
};

#endif