#include "FragTrap.hpp"

void		FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP "
	<< this->name << " attacks " << target << " at range, causing "
	<< this->Ranged_attack_damage << " points of damage!\n";
}
void		FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP "
	<< this->name << " attacks " << target << " at melee, causing "
	<< this->Melee_attack_damage << " points of damage!\n";
}
void		FragTrap::takeDamage(unsigned int amount)
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
	std::cout << "FR4G-TP "
	<< this->name << " takes " << damage << " points of damage!\n";
}

void		FragTrap::beRepaired(unsigned int amount)
{
	int		heal;
	if ((int)amount >= Max_energy_points || (int)amount + this->Energy_points >= Max_energy_points)
		heal = Max_energy_points;
	else heal = this->Energy_points + (int)amount;
	this->Energy_points = heal;
	std::cout << "FR4G-TP "
	<< this->name << " healed " << heal << " points energy!\n";
}

void		FragTrap::fireAttack(std::string const & target)
{
	std::cout << "FR4G-TP "
	<< this->name << " attacks " << target << " at fire, causing "
	<< this->Fire_attack_damage << " points of damage!\n";
}
void		FragTrap::iceAttack(std::string const & target)
{
	std::cout << "FR4G-TP "
	<< this->name << " attacks " << target << " at ice, causing "
	<< this->Ice_attack_damage << " points of damage!\n";
}
void		FragTrap::thunderAttack(std::string const & target)
{
	std::cout << "FR4G-TP "
	<< this->name << " attacks " << target << " at thunder, causing "
	<< this->Thunder_attack_damage << " points of damage!\n";
}
void		FragTrap::earthAttack(std::string const & target)
{
	std::cout << "FR4G-TP "
	<< this->name << " attacks " << target << " at earth, causing "
	<< this->Earth_attack_damage << " points of damage!\n";
}
void		FragTrap::lightAttack(std::string const & target)
{
	std::cout << "FR4G-TP "
	<< this->name << " attacks " << target << " at light, causing "
	<< this->Light_attack_damage << " points of damage!\n";
}

void		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int		a;

	if (this->Energy_points < 25)
	{
		std::cout << "There is not enough energy\n";
		return ;
	}
	this->Energy_points -= 25;
	a = rand() % 5;
	if (a == 0)
		this->fireAttack(target);
	else if (a == 1)
		this->iceAttack(target);
	else if (a == 2)
		this->thunderAttack(target);
	else if (a == 3)
		this->earthAttack(target);
	else if (a == 4)
		this->lightAttack(target);
}

FragTrap::FragTrap()
{
	std::cout << "FragTrap Constructor called\n";
	this->Hit_points = 100;
	this->Max_energy_points = 100;
	this->Max_hit_points = 100;
	this->Energy_points = 100;
	this->Level = 1;
	this->name = "Default";
	this->Melee_attack_damage = 30;
	this->Ranged_attack_damage = 20;
	this->Armor_damage_reduction = 5;
	this->Fire_attack_damage = 40;
	this->Ice_attack_damage = 40;
	this->Thunder_attack_damage = 40;
	this->Earth_attack_damage = 40;
	this->Light_attack_damage = 40;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap Constructor called\n";
	this->Hit_points = 100;
	this->Max_energy_points = 100;
	this->Max_hit_points = 100;
	this->Energy_points = 100;
	this->Level = 1;
	this->name = name;
	this->Melee_attack_damage = 30;
	this->Ranged_attack_damage = 20;
	this->Armor_damage_reduction = 5;
	this->Fire_attack_damage = 40;
	this->Ice_attack_damage = 40;
	this->Thunder_attack_damage = 40;
	this->Earth_attack_damage = 40;
	this->Light_attack_damage = 40;
}

FragTrap::FragTrap(FragTrap &obj)
{
	std::cout << "FragTrap Constructor called\n";
	*this = obj;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called\n";
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
	this->Fire_attack_damage = obj.Fire_attack_damage;
	this->Ice_attack_damage = obj.Ice_attack_damage;
	this->Thunder_attack_damage = obj.Thunder_attack_damage;
	this->Earth_attack_damage = obj.Earth_attack_damage;
	this->Light_attack_damage = obj.Light_attack_damage;
	return *this;
}