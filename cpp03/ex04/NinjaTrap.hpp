#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <string>
#include <iostream>
#include <ctime>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
private:
public:
	void		ninjaShoebox(ClapTrap &target);
	void		ninjaShoebox(NinjaTrap &target);
	void		ninjaShoebox(FragTrap &target);
	void		ninjaShoebox(ScavTrap &target);
	NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap &obj);
	~NinjaTrap();
	NinjaTrap &operator=(NinjaTrap &obj);
};

#endif