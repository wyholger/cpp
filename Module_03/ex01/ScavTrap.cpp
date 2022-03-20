#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << DARK_GREEN "Default constructor " END_COLOR;
	std::cout << DARK_YELLOW"ScavTrap " END_COLOR;
	std::cout << DARK_GREEN "called." END_COLOR << std::endl;
	this->name_ = "";
	this->hp_ = 100;
	this->mp_ = 50;
	this->damage_ = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	this->name_ = name;
	this->hp_ = 100;
	this->mp_ = 50;
	this->damage_ = 20;
	std::cout << DARK_GREEN "Constructor ScavTrap for " END_COLOR;
	std::cout << DARK_YELLOW << this->name_ << END_COLOR;
	std::cout << DARK_GREEN " called." END_COLOR << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << DARK_RED "Destructor " END_COLOR;
	std::cout << DARK_YELLOW "ScavTrap " END_COLOR;
	std::cout << DARK_RED "called." END_COLOR << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << PURPLE "ScavTrap " END_COLOR;
	std::cout << YELLOW << this->name_ << END_COLOR;
	std::cout << PURPLE " is now in Gate keeper mode." END_COLOR << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	std::cout << DARK_YELLOW "Copy constructor " END_COLOR;
	std::cout << DARK_YELLOW "ScavTrap " END_COLOR;
	std::cout << DARK_YELLOW "called." END_COLOR << std::endl;
	this->name_ = other.name_;
	this->hp_ = other.hp_;
	this->mp_ = other.mp_;
	this->damage_ = other.damage_;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << DARK_YELLOW "Copy assignment operator" END_COLOR;
	std::cout << DARK_YELLOW " ScavTrap " END_COLOR;
	std::cout << DARK_YELLOW "called." END_COLOR << std::endl;
	if (this == &other)
		return *this;
	this->name_ = other.name_;
	this->hp_ = other.hp_;
	this->mp_ = other.mp_;
	this->damage_ = other.damage_;
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	std::cout << PURPLE "ScavTrap " END_COLOR;
	std::cout << YELLOW + this->name_ + END_COLOR PURPLE " attack ";
	std::cout << YELLOW + target + END_COLOR PURPLE ", causes " + END_COLOR;
	std::cout << RED << this->damage_ << END_COLOR PURPLE " points of damage!" END_COLOR << std::endl;

}
