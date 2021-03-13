#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"
#include <iostream>

class RadScorpion : public Enemy
{
public:
	RadScorpion();
	RadScorpion(RadScorpion const & obj);
	~RadScorpion();
	void	takeDamage(int dmg);
	RadScorpion const & operator=(RadScorpion const & obj);
};

#endif