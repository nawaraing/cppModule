#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include <ctime>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
public:
	void		challengeNewcomer(void);
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap &obj);
	~ScavTrap();
	ScavTrap &operator=(ScavTrap &obj);
};

#endif