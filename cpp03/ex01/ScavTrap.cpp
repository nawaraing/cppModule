#include "ScavTrap.hpp"

void		ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SC4V-TP "
	<< this->name << " attacks " << target << " at range, causing "
	<< this->Ranged_attack_damage << " points of damage!\n";
}
void		ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SC4V-TP "
	<< this->name << " attacks " << target << " at melee, causing "
	<< this->Melee_attack_damage << " points of damage!\n";
}
void		ScavTrap::takeDamage(unsigned int amount)
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
	std::cout << "SC4V-TP "
	<< this->name << " takes " << damage << " points of damage!\n";
}

void		ScavTrap::beRepaired(unsigned int amount)
{
	int		heal;
	if (amount >= 100 || (int)amount + this->Energy_points >= Max_energy_points)
		heal = Max_energy_points;
	else heal = this->Energy_points + (int)amount;
	this->Energy_points = heal;
	std::cout << "SC4V-TP "
	<< this->name << " healed " << heal << " points energy!\n";
}

void		ScavTrap::challengeNewcomer(void)
{
	int		a;

	std::string challengePool[5] = {"get 5 coins", "go straight 10 seconds", "break 3 walls", "save all citizen", "finish the stage in 3 minutes"};
	a = rand() % 5;
	std::cout << "SC4V-TP "
	<< this->name << " challenge " << challengePool[a] << "!\n";
}

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Constructor called\n";
	this->Hit_points = 100;
	this->Max_energy_points = 100;
	this->Max_hit_points = 50;
	this->Energy_points = 50;
	this->Level = 1;
	this->name = "ScavTrap";
	this->Melee_attack_damage = 50;
	this->Ranged_attack_damage = 15;
	this->Armor_damage_reduction = 3;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap Constructor called\n";
	this->Hit_points = 100;
	this->Max_energy_points = 100;
	this->Max_hit_points = 50;
	this->Energy_points = 50;
	this->Level = 1;
	this->name = name;
	this->Melee_attack_damage = 50;
	this->Ranged_attack_damage = 15;
	this->Armor_damage_reduction = 3;
}

ScavTrap::ScavTrap(ScavTrap &obj)
{
	std::cout << "ScavTrap Constructor called\n";
	*this = obj;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called\n";
}

ScavTrap &ScavTrap::operator=(ScavTrap &obj)
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