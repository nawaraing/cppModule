#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include <ctime>

class ScavTrap
{
private:
	int			Hit_points;
	int			Max_hit_points;
	int			Energy_points;
	int			Max_energy_points;
	int			Level;
	std::string	name;
	int			Melee_attack_damage;
	int			Ranged_attack_damage;
	int			Armor_damage_reduction;
public:
	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		challengeNewcomer(void);
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap &obj);
	~ScavTrap();
	ScavTrap &operator=(ScavTrap &obj);
};

#endif