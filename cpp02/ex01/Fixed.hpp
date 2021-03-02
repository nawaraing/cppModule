#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					val;
	static const int	frac_bits = 8;
public:
	Fixed();
	Fixed(const Fixed &obj);
	Fixed(const int int_val);
	Fixed(const float float_val);
	~Fixed();
	Fixed &operator=(const Fixed &ref);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &obj);

#endif