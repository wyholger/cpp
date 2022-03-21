#include "../include/WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << GREEN "Default constructor " END_COLOR;
	std::cout << YELLOW "WrongCat " END_COLOR;
	std::cout << GREEN "called." END_COLOR << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << RED "Destructor " END_COLOR;
	std::cout << YELLOW "WrongCat " END_COLOR;
	std::cout << RED "called." END_COLOR << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
{
	std::cout << YELLOW "Copy constructor " END_COLOR;
	std::cout << YELLOW "WrongCat " END_COLOR;
	std::cout << YELLOW "called." END_COLOR << std::endl;
	this->_type = other._type;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << YELLOW "Copy assignment operator " END_COLOR;
	std::cout << YELLOW "WrongCat " END_COLOR;
	std::cout << YELLOW "called." END_COLOR << std::endl;
	if (this == &other)
		return *this;
	this->_type = other._type;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << BLUE "Meooooow Meoooooow 🐱." << END_COLOR << std::endl;
}
