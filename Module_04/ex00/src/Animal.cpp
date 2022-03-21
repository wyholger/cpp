#include "../include/Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << GREEN "Default constructor " END_COLOR;
	std::cout << YELLOW "Animal " END_COLOR;
	std::cout << GREEN "called." END_COLOR << std::endl;
}

//Animal::Animal(std::string type) : _type(type)
//{
//	std::cout << GREEN "Default constructor " END_COLOR;
//	std::cout << YELLOW "Animal " END_COLOR;
//	std::cout << GREEN "for type " END_COLOR;
//	std::cout << YELLOW << this->_type << END_COLOR;
//	std::cout << GREEN " called." END_COLOR << std::endl;
//}

Animal::~Animal()
{
	std::cout << RED "Destructor " END_COLOR;
	std::cout << YELLOW "Animal " END_COLOR;
	std::cout << RED "called." END_COLOR << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << YELLOW "Copy constructor " END_COLOR;
	std::cout << YELLOW "Animal " END_COLOR;
	std::cout << YELLOW "called." END_COLOR << std::endl;
	this->_type = other._type;
}

Animal &Animal::operator=(const Animal &other)
{
	std::cout << YELLOW "Copy assignment operator " END_COLOR;
	std::cout << YELLOW "Animal " END_COLOR;
	std::cout << YELLOW "called." END_COLOR << std::endl;
	if (this == &other)
		return *this;
	this->_type = other._type;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << BLUE "Make " END_COLOR;
	std::cout << YELLOW << this->_type << END_COLOR;
	std::cout << BLUE " sound." << END_COLOR << std::endl;
}

const std::string &Animal::getType() const
{
	return _type;
}


