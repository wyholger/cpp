#include "ClapTrap.hpp"

void ClapTrap::setName(const std::string &name)
{
	ClapTrap::_name = name;
}

void ClapTrap::setHp(int hp)
{
	ClapTrap::_hp = hp;
}

void ClapTrap::setMp(int mp)
{
	ClapTrap::_mp = mp;
}

void ClapTrap::setDamage(int damage)
{
	ClapTrap::_damage = damage;
}

const std::string &ClapTrap::getName() const
{
	return _name;
}

int ClapTrap::getHp() const
{
	return _hp;
}

int ClapTrap::getMp() const
{
	return _mp;
}

int ClapTrap::getDamage() const
{
	return _damage;
}

ClapTrap::ClapTrap() : _name("No_name"), _hp(10), _mp(10), _damage(0)
{
	std::cout << DARK_GREEN "Default constructor called." END_COLOR << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _mp(10), _damage(0)
{
	std::cout << DARK_GREEN "Constructor for " << this->_name << " called." END_COLOR << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	std::cout << PURPLE "ClapTrap " + this->_name + " attack " + target + ", causes ";
	std::cout << this->_damage << " points of damage!" END_COLOR << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int prev_hp;

	std::cout << RED "ClapTrap " + this->_name + " take " << amount << " points of damage!" END_COLOR << std::endl;
	prev_hp = this->_hp;
	this->_hp -= amount;
	if (this->_hp > prev_hp)
		this->_hp = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	unsigned int prev_hp;

	std::cout << GREEN "ClapTrap " + this->_name + " repaired " << amount << " hitpoints!" END_COLOR << std::endl;
	prev_hp = this->_hp;
	this->_hp += amount;
	if (this->_hp < prev_hp)
		this->_hp = UINT_MAX;
}

ClapTrap::~ClapTrap()
{
	std::cout << DARK_RED "Destructor called" END_COLOR << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << DARK_YELLOW << "Copy constructor called" << END_COLOR << std::endl;
	this->_name = other._name;
	this->_hp = other._hp;
	this->_mp = other._mp;
	this->_damage = other._damage;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &other)
{
	std::cout << DARK_YELLOW << "Copy assignment operator called" << END_COLOR << std::endl;
	if (this == &other)
		return *this;
	this->_name = other._name;
	this->_hp = other._hp;
	this->_mp = other._mp;
	this->_damage = other._damage;
	return *this;
}
