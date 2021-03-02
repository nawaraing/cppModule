#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int					val;
	static const int	frac_bits = 8;
public:
	Fixed();
	Fixed(Fixed &obj);
	~Fixed();
	Fixed &operator=(Fixed &ref);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif