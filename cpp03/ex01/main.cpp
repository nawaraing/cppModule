#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	srand(time(0));
	FragTrap	Frag("First Trap");
	Frag.rangedAttack("target1");
	Frag.meleeAttack("target2");
	Frag.takeDamage(10);
	Frag.takeDamage(20);
	Frag.takeDamage(30);
	Frag.takeDamage(100);
	Frag.takeDamage(40);
	Frag.beRepaired(30);
	Frag.takeDamage(40);
	Frag.beRepaired(100);
	Frag.vaulthunter_dot_exe("test1");
	Frag.vaulthunter_dot_exe("test2");
	Frag.vaulthunter_dot_exe("test3");
	Frag.vaulthunter_dot_exe("test4");
	Frag.vaulthunter_dot_exe("test5");
	Frag.vaulthunter_dot_exe("test6");
	Frag.vaulthunter_dot_exe("test7");

	ScavTrap	Scav("Second Trap");
	Scav.rangedAttack("target1");
	Scav.meleeAttack("target2");
	Scav.takeDamage(10);
	Scav.takeDamage(20);
	Scav.takeDamage(30);
	Scav.takeDamage(100);
	Scav.takeDamage(40);
	Scav.beRepaired(30);
	Scav.takeDamage(40);
	Scav.challengeNewcomer();
	Scav.challengeNewcomer();
	Scav.challengeNewcomer();
	Scav.challengeNewcomer();
	Scav.challengeNewcomer();
	Scav.challengeNewcomer();
	Scav.challengeNewcomer();
	return 0;
}