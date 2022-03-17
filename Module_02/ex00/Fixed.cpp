#include "Fixed.hpp"

Fixed::Fixed(int value) : _raw_bits(value)
{

}

Fixed::~Fixed()
{
	std::cout << RED << "Destructor called" << END_COLOR << std::endl;
}

Fixed &Fixed::operator = (const Fixed &other)
{
	std::cout << YELLOW << "Copy assignment operator called" << END_COLOR << std::endl;
	if (this != &other)
		this->_raw_bits = other.getRawBits();
	return *this;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << YELLOW << "Copy constructor called" << END_COLOR << std::endl;
	this->_raw_bits = other.getRawBits();
}

Fixed::Fixed()
{
	std::cout << GREEN << "Default constructor called" << END_COLOR << std::endl;
	this->_raw_bits = 0;
}

int Fixed::getRawBits(void) const
{
	std::cout << PURPLE << "getRawBits member function called" << END_COLOR << std::endl;
	return this->_raw_bits;
}

void Fixed::setRawBits(const int  raw)
{
	this->_raw_bits = raw;
}
