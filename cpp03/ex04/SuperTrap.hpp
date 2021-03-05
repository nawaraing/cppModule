#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include <string>
#include <iostream>
#include <ctime>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
private:
public:
	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	SuperTrap();
	SuperTrap(std::string name);
	SuperTrap(SuperTrap &obj);
	~SuperTrap();
	SuperTrap &operator=(SuperTrap &obj);
};

#endif