#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << GREEN "Default constructor " END_COLOR;
	std::cout << YELLOW "WrongAnimal " END_COLOR;
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

WrongAnimal::~WrongAnimal()
{
	std::cout << RED "Destructor " END_COLOR;
	std::cout << YELLOW "WrongAnimal " END_COLOR;
	std::cout << RED "called." END_COLOR << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << YELLOW "Copy constructor " END_COLOR;
	std::cout << YELLOW "WrongAnimal " END_COLOR;
	std::cout << YELLOW "called." END_COLOR << std::endl;
	this->_type = other._type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << YELLOW "Copy assignment operator " END_COLOR;
	std::cout << YELLOW "WrongAnimal " END_COLOR;
	std::cout << YELLOW "called." END_COLOR << std::endl;
	if (this == &other)
		return *this;
	this->_type = other._type;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << BLUE "Make " END_COLOR;
	std::cout << YELLOW << this->_type << END_COLOR;
	std::cout << BLUE " sound." << END_COLOR << std::endl;
}

const std::string &WrongAnimal::getType() const
{
	return _type;
}