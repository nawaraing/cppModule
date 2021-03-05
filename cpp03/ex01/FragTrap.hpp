#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include <ctime>

class FragTrap
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
	int			Fire_attack_damage;
	int			Ice_attack_damage;
	int			Thunder_attack_damage;
	int			Earth_attack_damage;
	int			Light_attack_damage;
public:
	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
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