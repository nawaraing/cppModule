#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class ZombieHorde
{
private:
	int		num;
	Zombie	*zombie;
public:
	ZombieHorde(int num);
	~ZombieHorde();
	void	announce(void);
};

#endif