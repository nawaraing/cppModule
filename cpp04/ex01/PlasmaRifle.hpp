#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle &obj);
	virtual ~PlasmaRifle();
	void attack() const;
	PlasmaRifle const &operator=(PlasmaRifle &obj);
};

#endif