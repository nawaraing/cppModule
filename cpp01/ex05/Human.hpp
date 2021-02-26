#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human
{
private:
	const Brain		brain;
public:
	std::string		identify();
	const Brain&	getBrain();
	Human();
	~Human();
};

#endif