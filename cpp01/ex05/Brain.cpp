#include "Brain.hpp"

std::string	Brain::identify(void) const
{
	std::stringstream	stream;

	stream << std::showbase << std::hex;
	stream << std::uppercase << (long)this;
	std::string	ret = stream.str();
	ret[1] = 'x';
	return ret;
}

Brain::Brain()
{

}

Brain::~Brain()
{

}