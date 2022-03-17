#ifndef EX01_FIXED_HPP
# define EX01_FIXED_HPP
# define YELLOW "\033[0;33m"
# define PURPLE "\033[0;35m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define END_COLOR "\033[0;0m"
# include <iostream>
# include <fstream>
# include <cmath>

class Fixed
{
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	~Fixed();

	Fixed(const Fixed &other);

	Fixed& operator = (const Fixed &other);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat( void ) const;
	int toInt( void ) const;

private:
	int _int_raw_bits;
	const static int _bits = 8;
};

std::ostream& operator << (std::ostream &os, const Fixed& fixed);

#endif
