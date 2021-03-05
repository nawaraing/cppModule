#include "FragTrap.hpp"

void		FragTrap::fireAttack(std::string const & target)
{
	std::cout << this->get_type() << " "
	<< this->get_name() << " attacks " << target << " at fire, causing "
	<< this->Fire_attack_damage << " points of damage!\n";
}
void		FragTrap::iceAttack(std::string const & target)
{
	std::cout << this->get_type() << " "
	<< this->get_name() << " attacks " << target << " at ice, causing "
	<< this->Ice_attack_damage << " points of damage!\n";
}
void		FragTrap::thunderAttack(std::string const & target)
{
	std::cout << this->get_type() << " "
	<< this->get_name() << " attacks " << target << " at thunder, causing "
	<< this->Thunder_attack_damage << " points of damage!\n";
}
void		FragTrap::earthAttack(std::string const & target)
{
	std::cout << this->get_type() << " "
	<< this->get_name() << " attacks " << target << " at earth, causing "
	<< this->Earth_attack_damage << " points of damage!\n";
}
void		FragTrap::lightAttack(std::string const & target)
{
	std::cout << this->get_type() << " "
	<< this->get_name() << " attacks " << target << " at light, causing "
	<< this->Light_attack_damage << " points of damage!\n";
}

void		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int		a;

	if (this->get_Energy_points() < 25)
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
	this->set_type("FR4G-TP");
	this->set_Hit_points(100);
	this->set_Max_energy_points(100);
	this->set_Max_hit_points(100);
	this->set_Energy_points(100);
	this->set_Level(1);
	this->set_name("FragTrap");
	this->set_Melee_attack_damage(30);
	this->set_Ranged_attack_damage(20);
	this->set_Armor_damage_reduction(5);
	this->Fire_attack_damage = 40;
	this->Ice_attack_damage = 40;
	this->Thunder_attack_damage = 40;
	this->Earth_attack_damage = 40;
	this->Light_attack_damage = 40;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap Constructor called\n";
	this->set_type("FR4G-TP");
	this->set_Hit_points(100);
	this->set_Max_energy_points(100);
	this->set_Max_hit_points(100);
	this->set_Energy_points(100);
	this->set_Level(1);
	this->set_name(name);
	this->set_Melee_attack_damage(30);
	this->set_Ranged_attack_damage(20);
	this->set_Armor_damage_reduction(5);
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
	this->Fire_attack_damage = obj.Fire_attack_damage;
	this->Ice_attack_damage = obj.Ice_attack_damage;
	this->Thunder_attack_damage = obj.Thunder_attack_damage;
	this->Earth_attack_damage = obj.Earth_attack_damage;
	this->Light_attack_damage = obj.Light_attack_damage;
	return *this;
}