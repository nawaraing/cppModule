#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main(void)
{
	Zombie	st;
	Zombie	*hp;

	st = Zombie("StackZombie", "STACK");
	std::cout << "Stack says...\n";
	st.announce();
	hp = new Zombie("HeapZombie", "HEAP");
	std::cout << "Heap says...\n";
	hp->announce();
	delete(hp);

	ZombieEvent		eve;
	eve.setZombieType("EVE TYPE");
	hp = eve.newZombie("EveZombie");
	hp->announce();
	delete(hp);

	hp = eve.randomChump();
	delete(hp);

	// while (1) NULL;
	return 0;
}