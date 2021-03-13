#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include <iostream>

class Cure : public AMateria
{
public:
	Cure();
	Cure(std::string const & type);
	Cure(Cure const & obj);
	~Cure();
	Cure & operator=(Cure const & obj);
	Cure* clone() const;
	void use(ICharacter& target);
};


#endif