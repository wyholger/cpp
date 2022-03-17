#ifndef EX02_FIXED_HPP
# define EX02_FIXED_HPP
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
	bool operator == (const Fixed &other) const;
	bool operator != (const Fixed &other) const;
	bool operator >= (const Fixed &other) const;
	bool operator <= (const Fixed &other) const;
	bool operator > (const Fixed &other) const;
	bool operator < (const Fixed &other) const;
	Fixed operator + (const Fixed &other) const;
	Fixed operator - (const Fixed &other) const;
	Fixed operator * (const Fixed &other) const;
	Fixed operator / (const Fixed &other) const;
	Fixed& operator ++ ();
	Fixed operator ++ (int);
	Fixed& operator -- ();
	Fixed operator -- (int);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat( void ) const;
	int toInt( void ) const;
	static Fixed& max(Fixed& a, Fixed& b);
	static const Fixed& max(Fixed const & a, Fixed const & b);
	static Fixed& min(Fixed& a, Fixed& b);
	static const Fixed& min(Fixed const & a, Fixed const & b);

private:
	int _int_raw_bits;
	const static int _bits = 8;
};

std::ostream& operator << (std::ostream &os, const Fixed& fixed);

#endif
