#include "Fixed.hpp"


Fixed::Fixed(const int value)
{
	this->_int_raw_bits = value << Fixed::_bits;
	std::cout << GREEN << "Int constructor called" << END_COLOR << std::endl;
}

Fixed::~Fixed()
{
	std::cout << RED << "Destructor called" << END_COLOR << std::endl;
}

Fixed &Fixed::operator = (const Fixed &other)
{
	std::cout << YELLOW << "Copy assignment operator called" << END_COLOR << std::endl;
	if (this != &other)
		this->_int_raw_bits = other._int_raw_bits;
	return *this;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << YELLOW << "Copy constructor called" << END_COLOR << std::endl;
	this->_int_raw_bits = other._int_raw_bits;
}

Fixed::Fixed()
{
	std::cout << GREEN << "Default constructor called" << END_COLOR << std::endl;
	this->_int_raw_bits = 0;
}

int Fixed::getRawBits(void) const
{
	std::cout << PURPLE << "getRawBits member function called" << END_COLOR << std::endl;
	return this->_int_raw_bits;
}

void Fixed::setRawBits(const int  raw)
{
	this->_int_raw_bits = raw;
}

Fixed::Fixed(const float value)
{
	this->_int_raw_bits = (int) (std::roundf) (value * (1 << Fixed::_bits));
	std::cout << GREEN << "Float constructor called" << END_COLOR << std::endl;
}

float Fixed::toFloat(void) const
{
	return ((float)this->_int_raw_bits / (1 << Fixed::_bits));
}

int Fixed::toInt(void) const
{
	return (this->_int_raw_bits >> Fixed::_bits);
}

std::ostream &operator << (std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}
