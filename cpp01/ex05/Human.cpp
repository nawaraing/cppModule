#include "Human.hpp"

std::string		Human::identify()
{
	return this->brain.identify();
}

const Brain&	Human::getBrain()
{
	return this->brain;
}


Human::Human()
{

}

Human::~Human()
{

}
