#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <string>
#include <iostream>

class Character
{
private:
	std::string		name;
	int				ap;
	AWeapon			*weapon;
public:
	Character(std::string const & name);
	Character(Character const & obj);
	~Character();
	void recoverAP();
	void equip(AWeapon *weapon);
	void attack(Enemy *enemy);
	std::string const getName() const;
	int getAP() const;
	AWeapon * getWeapon() const;
	Character const & operator=(Character const & obj);
};

std::ostream & operator<<(std::ostream &out, Character const & obj); 

#endif