//
// Created by Wynell Holger on 3/21/22.
//

#include "../include/Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << GREEN "Default constructor " END_COLOR;
	std::cout << YELLOW "Cat " END_COLOR;
	std::cout << GREEN "called." END_COLOR << std::endl;
}

Cat::~Cat()
{
	std::cout << RED "Destructor " END_COLOR;
	std::cout << YELLOW "Cat " END_COLOR;
	std::cout << RED "called." END_COLOR << std::endl;
}

Cat::Cat(const Cat &other)
{
	std::cout << YELLOW "Copy constructor " END_COLOR;
	std::cout << YELLOW "Cat " END_COLOR;
	std::cout << YELLOW "called." END_COLOR << std::endl;
	this->_type = other._type;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << YELLOW "Copy assignment operator " END_COLOR;
	std::cout << YELLOW "Cat " END_COLOR;
	std::cout << YELLOW "called." END_COLOR << std::endl;
	if (this == &other)
		return *this;
	this->_type = other._type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << BLUE "Meooooow Meoooooow 🐱." << END_COLOR << std::endl;
}
