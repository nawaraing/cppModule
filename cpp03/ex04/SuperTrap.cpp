#include "SuperTrap.hpp"

void	SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}
void	SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}

SuperTrap::SuperTrap()
{
	std::cout << "SuperTrap Constructor called\n";
	this->set_type("SUP3-TP");
	this->set_Hit_points(FragTrap::get_Hit_points());
	this->set_Max_energy_points(NinjaTrap::get_Max_energy_points());
	this->set_Max_hit_points(FragTrap::get_Max_energy_points());
	this->set_Energy_points(NinjaTrap::get_Energy_points());
	this->set_Level(1);
	this->set_name("SuperTrap");
	this->set_Melee_attack_damage(NinjaTrap::get_Melee_attack_damage());
	this->set_Ranged_attack_damage(FragTrap::get_Ranged_attack_damage());
	this->set_Armor_damage_reduction(FragTrap::get_Armor_damage_reduction());
}

SuperTrap::SuperTrap(std::string name)
{
	std::cout << "SuperTrap Constructor called\n";
	this->set_type("SUP3-TP");
	this->set_Hit_points(FragTrap::get_Hit_points());
	this->set_Max_energy_points(NinjaTrap::get_Max_energy_points());
	this->set_Max_hit_points(FragTrap::get_Max_energy_points());
	this->set_Energy_points(NinjaTrap::get_Energy_points());
	this->set_Level(1);
	this->set_name(name);
	this->set_Melee_attack_damage(NinjaTrap::get_Melee_attack_damage());
	this->set_Ranged_attack_damage(FragTrap::get_Ranged_attack_damage());
	this->set_Armor_damage_reduction(FragTrap::get_Armor_damage_reduction());
}

SuperTrap::SuperTrap(SuperTrap &obj)
{
	std::cout << "SuperTrap Constructor called\n";
	*this = obj;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap Destructor called\n";
}

SuperTrap &SuperTrap::operator=(SuperTrap &obj)
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