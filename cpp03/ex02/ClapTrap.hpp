#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>
#include <ctime>

class ClapTrap
{
protected:
	int			Energy_points;
private:
	std::string	type;
	int			Hit_points;
	int			Max_hit_points;
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
	void		set_type(std::string type);
	void		set_Hit_points(int arg);
	void		set_Max_hit_points(int arg);
	void		set_Energy_points(int arg);
	void		set_Max_energy_points(int arg);
	void		set_Level(int arg);
	void		set_name(std::string name);
	void		set_Melee_attack_damage(int arg);
	void		set_Ranged_attack_damage(int arg);
	void		set_Armor_damage_reduction(int arg);
	std::string	get_type(void);
	int			get_Hit_points(void);
	int			get_Max_hit_points(void);
	int			get_Energy_points(void);
	int			get_Max_energy_points(void);
	int			get_Level(void);
	std::string	get_name(void);
	int			get_Melee_attack_damage(void);
	int			get_Ranged_attack_damage(void);
	int			get_Armor_damage_reduction(void);
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap &obj);
	~ClapTrap();
	ClapTrap &operator=(ClapTrap &obj);
};

#endif