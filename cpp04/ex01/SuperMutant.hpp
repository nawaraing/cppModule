#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"
#include <iostream>

class SuperMutant : public Enemy
{
public:
	SuperMutant();
	SuperMutant(SuperMutant const & obj);
	~SuperMutant();
	void	takeDamage(int dmg);
	SuperMutant const & operator=(SuperMutant const & obj);
};

#endif