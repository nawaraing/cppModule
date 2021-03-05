#include "ScavTrap.hpp"

void		ScavTrap::challengeNewcomer(void)
{
	int		a;

	std::string challengePool[5] = {"get 5 coins", "go straight 10 seconds", "break 3 walls", "save all citizen", "finish the stage in 3 minutes"};
	a = rand() % 5;
	std::cout << "SC4V-TP "
	<< this->get_name() << " challenge " << challengePool[a] << "!\n";
}

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Constructor called\n";
	this->set_type("SC4V-TP");
	this->set_Hit_points(100);
	this->set_Max_energy_points(100);
	this->set_Max_hit_points(50);
	this->set_Energy_points(50);
	this->set_Level(1);
	this->set_name("ScavTrap");
	this->set_Melee_attack_damage(50);
	this->set_Ranged_attack_damage(15);
	this->set_Armor_damage_reduction(3);
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap Constructor called\n";
	this->set_type("SC4V-TP");
	this->set_Hit_points(100);
	this->set_Max_energy_points(100);
	this->set_Max_hit_points(50);
	this->set_Energy_points(50);
	this->set_Level(1);
	this->set_name(name);
	this->set_Melee_attack_damage(50);
	this->set_Ranged_attack_damage(15);
	this->set_Armor_damage_reduction(3);
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
	this->set_type(obj.get_type());
	this->set_Hit_points(obj.get_Hit_points());
	this->set_Max_energy_points(obj.get_Max_energy_points());
	this->set_Max_hit_points(obj.get_Max_hit_points());
	this->set_Energy_points(obj.get_Energy_points());
	this->set_Level(obj.get_Level());
	this->set_name(obj.get_name());
	this->set_Melee_attack_damage(obj.get_Melee_attack_damage());
	this->set_Ranged_attack_damage(obj.get_Ranged_attack_damage());
	this->set_Armor_damage_reduction(obj.get_Armor_damage_reduction());
	return *this;
}