#include "Fixed.hpp"

Fixed::Fixed(const int value)
{
	this->_int_raw_bits = value << Fixed::_bits;
	//std::cout << GREEN << "Int constructor called" << END_COLOR << std::endl;
}

Fixed::~Fixed()
{
	//std::cout << RED << "Destructor called" << END_COLOR << std::endl;
}

Fixed &Fixed::operator = (const Fixed &other)
{
	//std::cout << YELLOW << "Copy assignment operator called" << END_COLOR << std::endl;
	if (this != &other)
		this->_int_raw_bits = other._int_raw_bits;
	return *this;
}

Fixed::Fixed(const Fixed &other)
{
	//std::cout << YELLOW << "Copy constructor called" << END_COLOR << std::endl;
	this->_int_raw_bits = other._int_raw_bits;
}

Fixed::Fixed()
{
	//std::cout << GREEN << "Default constructor called" << END_COLOR << std::endl;
	this->_int_raw_bits = 0;
}

int Fixed::getRawBits(void) const
{
	//std::cout << PURPLE << "getRawBits member function called" << END_COLOR << std::endl;
	return this->_int_raw_bits;
}

void Fixed::setRawBits(const int  raw)
{
	this->_int_raw_bits = raw;
}

Fixed::Fixed(const float value)
{
	this->_int_raw_bits = (int) (std::roundf) (value * (1 << Fixed::_bits));
	//std::cout << GREEN << "Float constructor called" << END_COLOR << std::endl;
}

float Fixed::toFloat(void) const
{
	return ((float)this->_int_raw_bits / (1 << Fixed::_bits));
}

int Fixed::toInt(void) const
{
	return (this->_int_raw_bits >> Fixed::_bits);
}

bool Fixed::operator == (const Fixed &other) const
{
	return this->_int_raw_bits == other._int_raw_bits;
}

bool Fixed::operator != (const Fixed &other) const
{
	return this->_int_raw_bits != other._int_raw_bits;
}

bool Fixed::operator >= (const Fixed &other) const
{
	return this->_int_raw_bits >= other._int_raw_bits;
}

bool Fixed::operator <= (const Fixed &other) const
{
	return this->_int_raw_bits <= other._int_raw_bits;
}

bool Fixed::operator > (const Fixed &other) const
{
	return this->_int_raw_bits > other._int_raw_bits;
}

bool Fixed::operator < (const Fixed &other) const
{
	return this->_int_raw_bits < other._int_raw_bits;
}

Fixed Fixed::operator + (const Fixed &other) const
{
	return Fixed(this->_int_raw_bits + other._int_raw_bits);
}

Fixed Fixed::operator - (const Fixed &other) const
{
	return Fixed(this->_int_raw_bits - other._int_raw_bits);
}

Fixed Fixed::operator * (const Fixed &other) const
{
	Fixed tmp;
	tmp.setRawBits((this->_int_raw_bits * other._int_raw_bits) >> Fixed::_bits);
	return tmp;
}

Fixed Fixed::operator / (const Fixed &other) const
{
	Fixed tmp;
	tmp.setRawBits((this->_int_raw_bits << Fixed::_bits) / other._int_raw_bits);
	return tmp;
}

Fixed &Fixed::operator++()
{
	this->_int_raw_bits++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp;
	tmp.setRawBits(this->_int_raw_bits++);
	return tmp;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a >= b)
		return a;
	return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a >= b)
		return a;
	return b;
}

Fixed &Fixed::operator--()
{
	this->_int_raw_bits--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp;
	tmp.setRawBits(this->_int_raw_bits--);
	return tmp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a <= b)
		return a;
	return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a <= b)
		return a;
	return b;
}

std::ostream &operator << (std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}