#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
private:
	std::string		name;
	std::string		title;
public:
	std::string		getName(void);
	std::string		getTitle(void);
	void			setName(std::string name);
	void			setTitle(std::string title);
	void 			polymorph(Victim const &victim) const;
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer &obj);
	~Sorcerer();
	Sorcerer &operator=(Sorcerer &obj);
};
std::ostream &operator<<(std::ostream &out, Sorcerer &obj);

#endif