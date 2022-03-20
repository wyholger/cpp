#include "ClapTrap.hpp"

void ClapTrap::setName(const std::string &name)
{
	ClapTrap::name_ = name;
}

void ClapTrap::setHp(int hp)
{
	ClapTrap::hp_ = hp;
}

void ClapTrap::setMp(int mp)
{
	ClapTrap::mp_ = mp;
}

void ClapTrap::setDamage(int damage)
{
	ClapTrap::damage_ = damage;
}

const std::string &ClapTrap::getName() const
{
	return name_;
}

int ClapTrap::getHp() const
{
	return hp_;
}

int ClapTrap::getMp() const
{
	return mp_;
}

int ClapTrap::getDamage() const
{
	return damage_;
}

ClapTrap::ClapTrap() : name_("No_name"), hp_(10), mp_(10), damage_(0)
{
	std::cout << DARK_GREEN "Default constructor " END_COLOR;
	std::cout << DARK_YELLOW "ClapTrap " END_COLOR;
	std::cout << DARK_GREEN "called." END_COLOR << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name_(name), hp_(10), mp_(10), damage_(0)
{
	std::cout << DARK_GREEN "Constructor ClapTrap for " END_COLOR;
	std::cout << DARK_YELLOW << this->name_ << END_COLOR;
	std::cout << DARK_GREEN " called." END_COLOR << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	std::cout << PURPLE "ClapTrap " END_COLOR;
	std::cout << YELLOW + this->name_ + END_COLOR PURPLE " attack ";
	std::cout << YELLOW + target + END_COLOR PURPLE ", causes " + END_COLOR;
	std::cout << RED << this->damage_ << END_COLOR PURPLE " points of damage!" END_COLOR << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int prev_hp;

	std::cout << YELLOW + this->name_ + END_COLOR;
	std::cout << RED " take " << amount << " points of damage!" END_COLOR << std::endl;
	prev_hp = this->hp_;
	this->hp_ -= amount;
	if (this->hp_ > prev_hp)
		this->hp_ = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	unsigned int prev_hp;

	std::cout << YELLOW + this->name_ + END_COLOR;
	std::cout << GREEN " repaired " << amount << " hitpoints!" END_COLOR << std::endl;
	prev_hp = this->hp_;
	this->hp_ += amount;
	if (this->hp_ < prev_hp)
		this->hp_ = UINT_MAX;
}

ClapTrap::~ClapTrap()
{
	std::cout << DARK_RED "Destructor " END_COLOR;
	std::cout << DARK_YELLOW "ClapTrap " END_COLOR;
	std::cout << DARK_RED "called." END_COLOR << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << DARK_YELLOW "Copy constructor " END_COLOR;
	std::cout << DARK_YELLOW " ClapTrap " END_COLOR;
	std::cout << DARK_YELLOW "called." END_COLOR << std::endl;
	this->name_ = other.name_;
	this->hp_ = other.hp_;
	this->mp_ = other.mp_;
	this->damage_ = other.damage_;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &other)
{
	std::cout << DARK_YELLOW "Copy assignment operator" END_COLOR;
	std::cout << DARK_YELLOW " ClapTrap " END_COLOR;
	std::cout << DARK_YELLOW "called." END_COLOR << std::endl;
	if (this == &other)
		return *this;
	this->name_ = other.name_;
	this->hp_ = other.hp_;
	this->mp_ = other.mp_;
	this->damage_ = other.damage_;
	return *this;
}
