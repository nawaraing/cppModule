#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	val = 0;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called\n";
	*this = obj;
}

Fixed::Fixed(const int int_val)
{
    std::cout<<"Int constructor called\n";
    this->val = int_val << this->frac_bits;
}

Fixed::Fixed(const float float_val)
{
    std::cout<<"Float constructor called\n";
    this->val = roundf(float_val * (1 << this->frac_bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int		Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called\n";
	return this->val;
}

void	Fixed::setRawBits(int const raw)
{
	this->val = raw;
}

float Fixed::toFloat( void ) const
{
	return ((float)this->val/(float)(1 << this->frac_bits));
}

int Fixed::toInt( void ) const
{
    return ((int)this->val >> this->frac_bits);
}

Fixed	&Fixed::operator=(const Fixed &ref)
{
	std::cout << "Assignation operator called\n";
	this->val = ref.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &out, Fixed const &obj)
{
	out << obj.toFloat();
	return out;
}
