#include "NinjaTrap.hpp"

void		NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	std::cout << "ninja Shoebox scan ClapTrap\n";
	std::cout << target.get_name() << " remains " << target.get_Energy_points() << " energy\n";
}
void		NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	std::cout << "ninja Shoebox scan NinjaTrap\n";
	std::cout << target.get_name() << " is " << target.get_Level() << " LVLs\n";
}
void		NinjaTrap::ninjaShoebox(FragTrap &target)
{
	std::cout << "ninja Shoebox scan FragTrap\n";
	std::cout << target.get_name() << " has " << target.get_Ranged_attack_damage() << " ranged attack damages\n";
}
void		NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	std::cout << "ninja Shoebox scan ScavTrap\n";
	std::cout << target.get_name() << " has " << target.get_Armor_damage_reduction() << " ARMORs\n";
}

NinjaTrap::NinjaTrap()
{
	std::cout << "NinjaTrap Constructor called\n";
	this->set_type("N1NJ-TP");
	this->set_Hit_points(60);
	this->set_Max_energy_points(60);
	this->set_Max_hit_points(120);
	this->set_Energy_points(120);
	this->set_Level(1);
	this->set_name("NinjaTrap");
	this->set_Melee_attack_damage(60);
	this->set_Ranged_attack_damage(5);
	this->set_Armor_damage_reduction(0);
}

NinjaTrap::NinjaTrap(std::string name)
{
	std::cout << "NinjaTrap Constructor called\n";
	this->set_type("N1NJ-TP");
	this->set_Hit_points(60);
	this->set_Max_energy_points(60);
	this->set_Max_hit_points(120);
	this->set_Energy_points(120);
	this->set_Level(1);
	this->set_name(name);
	this->set_Melee_attack_damage(60);
	this->set_Ranged_attack_damage(5);
	this->set_Armor_damage_reduction(0);
}

NinjaTrap::NinjaTrap(NinjaTrap &obj)
{
	std::cout << "NinjaTrap Constructor called\n";
	*this = obj;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap Destructor called\n";
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap &obj)
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