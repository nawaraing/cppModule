#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class AssaultTerminator : public ISpaceMarine
{
public:
	~AssaultTerminator();
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const & obj);
	AssaultTerminator & operator=(AssaultTerminator const & obj);
	AssaultTerminator* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif