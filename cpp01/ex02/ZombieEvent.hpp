#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <ctime>

class ZombieEvent
{
private:
	std::string		type;
public:
	void	setZombieType(std::string type);
	Zombie	*newZombie(std::string name);
	Zombie	*randomChump(void);
	ZombieEvent();
	~ZombieEvent();
};

#endif