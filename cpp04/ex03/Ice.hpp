#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria
{
public:
	Ice();
	Ice(std::string const & type);
	Ice(Ice const & obj);
	~Ice();
	Ice & operator=(Ice const & obj);
	Ice* clone() const;
	void use(ICharacter& target);
};


#endif