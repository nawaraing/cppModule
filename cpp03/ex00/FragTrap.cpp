#include "FragTrap.hpp"

void		FragTrap::rangedAttack(std::string const & target)
{
	int		damage = this->Ranged_attack_damage - ;

	std::cout << "FR4G-TP <"
	<< this->name << "> attacks < " << target << "> at range, causing <"
	<< damage << "> points of damage!";
}
void		FragTrap::meleeAttack(std::string const & target)
{
	;
}
void		FragTrap::takeDamage(unsigned int amount)
{
	;
}
void		FragTrap::beRepaired(unsigned int amount)
{
	;
}

FragTrap::FragTrap()
{
	std::cout << "Default Constructor called\n";
	this->Hit_points = 100;
	this->Max_energy_points = 100;
	this->Max_hit_points = 100;
	this->Energy_points = 100;
	this->Level = 1;
	this->name = "Default";
	this->Melee_attack_damage = 30;
	this->Ranged_attack_damage = 20;
	this->Armor_damage_reduction = 5;
}

FragTrap::FragTrap(FragTrap &obj)
{
	*this = obj;
}

FragTrap::~FragTrap()
{
	std::cout << "Default Destructor called\n";
}

FragTrap &FragTrap::operator=(FragTrap &obj)
{
	this->Hit_points = obj.Hit_points;
	this->Max_energy_points = obj.Max_energy_points;
	this->Max_hit_points = obj.Max_hit_points;
	this->Energy_points = obj.Energy_points;
	this->Level = obj.Level;
	this->name = obj.name;
	this->Melee_attack_damage = obj.Melee_attack_damage;
	this->Ranged_attack_damage = obj.Ranged_attack_damage;
	this->Armor_damage_reduction = obj.Armor_damage_reduction;
	return *this;
}