#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include <ctime>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
	int			Fire_attack_damage;
	int			Ice_attack_damage;
	int			Thunder_attack_damage;
	int			Earth_attack_damage;
	int			Light_attack_damage;
public:
	void		vaulthunter_dot_exe(std::string const & target);
	void		fireAttack(std::string const & target);
	void		iceAttack(std::string const & target);
	void		thunderAttack(std::string const & target);
	void		earthAttack(std::string const & target);
	void		lightAttack(std::string const & target);
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap &obj);
	~FragTrap();
	FragTrap &operator=(FragTrap &obj);
};

#endif