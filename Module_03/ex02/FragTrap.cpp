#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << DARK_GREEN "Default constructor " END_COLOR;
	std::cout << DARK_YELLOW"FragTrap " END_COLOR;
	std::cout << DARK_GREEN "called." END_COLOR << std::endl;
	this->name_ = "";
	this->hp_ = 100;
	this->mp_ = 100;
	this->damage_ = 30;
}

FragTrap::FragTrap(std::string name)
{
	this->name_ = name;
	this->hp_ = 100;
	this->mp_ = 100;
	this->damage_ = 30;
	std::cout << DARK_GREEN "Constructor FragTrap for " END_COLOR;
	std::cout << DARK_YELLOW << this->name_ << END_COLOR;
	std::cout << DARK_GREEN " called." END_COLOR << std::endl;

}

FragTrap::FragTrap(const FragTrap &other)
{
	std::cout << DARK_YELLOW "Copy constructor " END_COLOR;
	std::cout << DARK_YELLOW "FragTrap " END_COLOR;
	std::cout << DARK_YELLOW "called." END_COLOR << std::endl;
	this->name_ = other.name_;
	this->hp_ = other.hp_;
	this->mp_ = other.mp_;
	this->damage_ = other.damage_;
}

FragTrap::~FragTrap()
{
	std::cout << DARK_RED "Destructor " END_COLOR;
	std::cout << DARK_YELLOW "FragTrap " END_COLOR;
	std::cout << DARK_RED "called." END_COLOR << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << DARK_YELLOW "Copy assignment operator " END_COLOR;
	std::cout << DARK_YELLOW "FragTrap " END_COLOR;
	std::cout << DARK_YELLOW "called." END_COLOR << std::endl;
	if (this == &other)
		return *this;
	this->name_ = other.name_;
	this->hp_ = other.hp_;
	this->mp_ = other.mp_;
	this->damage_ = other.damage_;
	return *this;
}

void FragTrap::attack(const std::string &target)
{
	std::cout << PURPLE "FragTrap " END_COLOR;
	std::cout << YELLOW + this->name_ + END_COLOR PURPLE " attack ";
	std::cout << YELLOW + target + END_COLOR PURPLE ", causes " + END_COLOR;
	std::cout << RED << this->damage_ << END_COLOR PURPLE " points of damage!" END_COLOR << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << YELLOW "FragTrap " END_COLOR;
	std::cout << PURPLE "request a positive high fives!!!" END_COLOR << std::endl;
}
