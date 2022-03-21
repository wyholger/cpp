#include "../include/Dog.hpp"

Dog::Dog() : _brain(new Brain())
{
	this->_type = "Dog";
	std::cout << GREEN "Default constructor " END_COLOR;
	std::cout << YELLOW "Dog " END_COLOR;
	std::cout << GREEN "called." END_COLOR << std::endl;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << RED "Destructor " END_COLOR;
	std::cout << YELLOW "Dog " END_COLOR;
	std::cout << RED "called." END_COLOR << std::endl;
}

Dog::Dog(const Dog &other)
{
	std::cout << YELLOW "Copy constructor " END_COLOR;
	std::cout << YELLOW "Dog " END_COLOR;
	std::cout << YELLOW "called." END_COLOR << std::endl;
	this->_type = other._type;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << YELLOW "Copy assignment operator " END_COLOR;
	std::cout << YELLOW "Dog " END_COLOR;
	std::cout << YELLOW "called." END_COLOR << std::endl;
	if (this == &other)
		return *this;
	this->_type = other._type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << BLUE "Wooooof Wooooof 🐶." << END_COLOR << std::endl;
}
