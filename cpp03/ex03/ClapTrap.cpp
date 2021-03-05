#include "ClapTrap.hpp"

void		ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << type << " "
	<< this->name << " attacks " << target << " at range, causing "
	<< this->Ranged_attack_damage << " points of damage!\n";
}
void		ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << type << " "
	<< this->name << " attacks " << target << " at melee, causing "
	<< this->Melee_attack_damage << " points of damage!\n";
}
void		ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int		damage;
	if ((int)amount > this->Armor_damage_reduction)
		damage = amount - this->Armor_damage_reduction;
	else damage = 0;
	if (this->Energy_points < (int)damage)
	{
		damage = this->Energy_points;
		this->Energy_points = 0;
	}
	else
		this->Energy_points -= damage;
	std::cout << type << " "
	<< this->name << " takes " << damage << " points of damage!\n";
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	int		heal;
	if (amount >= 100 || (int)amount + this->Energy_points >= Max_energy_points)
		heal = Max_energy_points;
	else heal = this->Energy_points + (int)amount;
	this->Energy_points = heal;
	std::cout << type << " "
	<< this->name << " healed " << heal << " points energy!\n";
}

void		ClapTrap::set_type(std::string type)
{
	this->type = type;
}
void		ClapTrap::set_Hit_points(int arg)
{
	this->Hit_points = arg;
}
void		ClapTrap::set_Max_hit_points(int arg)
{
	this->Max_hit_points = arg;
}
void		ClapTrap::set_Energy_points(int arg)
{
	this->Energy_points = arg;
}
void		ClapTrap::set_Max_energy_points(int arg)
{
	this->Max_energy_points = arg;
}
void		ClapTrap::set_Level(int arg)
{
	this->Level = arg;
}
void		ClapTrap::set_name(std::string name)
{
	this->name = name;
}
void		ClapTrap::set_Melee_attack_damage(int arg)
{
	this->Melee_attack_damage = arg;
}
void		ClapTrap::set_Ranged_attack_damage(int arg)
{
	this->Ranged_attack_damage = arg;
}
void		ClapTrap::set_Armor_damage_reduction(int arg)
{
	this->Armor_damage_reduction = arg;
}
std::string	ClapTrap::get_type(void)
{
	return this->type;
}
int			ClapTrap::get_Hit_points(void)
{
	return this->Hit_points;
}
int			ClapTrap::get_Max_hit_points(void)
{
	return this->Max_hit_points;
}
int			ClapTrap::get_Energy_points(void)
{
	return this->Energy_points;
}
int			ClapTrap::get_Max_energy_points(void)
{
	return this->Max_energy_points;
}
int			ClapTrap::get_Level(void)
{
	return this->Level;
}
std::string	ClapTrap::get_name(void)
{
	return this->name;
}
int			ClapTrap::get_Melee_attack_damage(void)
{
	return this->Melee_attack_damage;
}
int			ClapTrap::get_Ranged_attack_damage(void)
{
	return this->Ranged_attack_damage;
}
int			ClapTrap::get_Armor_damage_reduction(void)
{
	return this->Armor_damage_reduction;
}

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Constructor called\n";
	this->type = "CL4P-TP";
	this->Hit_points = 100;
	this->Max_energy_points = 100;
	this->Max_hit_points = 100;
	this->Energy_points = 100;
	this->Level = 1;
	this->name = "ClapTrap";
	this->Melee_attack_damage = 30;
	this->Ranged_attack_damage = 20;
	this->Armor_damage_reduction = 5;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap Constructor called\n";
	this->type = "CL4P-TP";
	this->Hit_points = 100;
	this->Max_energy_points = 100;
	this->Max_hit_points = 100;
	this->Energy_points = 100;
	this->Level = 1;
	this->name = name;
	this->Melee_attack_damage = 30;
	this->Ranged_attack_damage = 20;
	this->Armor_damage_reduction = 5;
}

ClapTrap::ClapTrap(ClapTrap &obj)
{
	std::cout << "ClapTrap Constructor called\n";
	*this = obj;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called\n";
}

ClapTrap &ClapTrap::operator=(ClapTrap &obj)
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