#ifndef PEON_HPP
#define PEON_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
private:
	int		num;
public:
	void			getPolymorphed() const;
	Peon(std::string name);
	Peon(Peon &obj);
	~Peon();
	Peon &operator=(Peon &obj);
};
std::ostream &operator<<(std::ostream &out, Peon &obj);
#endif