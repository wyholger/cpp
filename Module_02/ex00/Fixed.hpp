//
// Created by Wynell Holger on 3/16/22.
//

#ifndef EX00_FIXED_HPP
# define EX00_FIXED_HPP
# define YELLOW "\033[1;33m"
# define PURPLE "\033[0;35m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define END_COLOR "\033[0;0m"
# include <iostream>

class Fixed {
public:
	Fixed();
	Fixed(int value);
	virtual ~Fixed();
	Fixed(const Fixed &other);
	Fixed & operator = (const Fixed &other);
	int getRawBits(void) const;
	void setRawBits(int const raw);

private:
	int _value;
	const static int _raw_bits = 8;
};


#endif //EX00_FIXED_HPP
