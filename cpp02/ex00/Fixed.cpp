#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	val = 0;
}

Fixed::Fixed(Fixed &obj)
{
	std::cout << "Copy constructor called\n";
	*this = obj;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return this->val;
}

void	Fixed::setRawBits(int const raw)
{
	this->val = raw;
}

Fixed	&Fixed::operator=(Fixed &ref)
{
	std::cout << "Assignation operator called\n";
	this->val = ref.getRawBits();
	return *this;
}
