#include "../include/Character.hpp"

Character::Character() : _name("")
{
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = nullptr;
	}
}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = nullptr;
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		delete this->_inventory[i];
	}
}

Character::Character(const Character &other)
{
	this->_name = other._name;
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = other._inventory[i];
	}
}

Character &Character::operator=(const Character &other)
{
	if (this == &other)
		return *this;
	this->_name = other._name;
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = other._inventory[i];
	}
	return *this;
}

std::string const &Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == nullptr)
		{
			this->_inventory[i] = m;
			return;
		}
	}
	delete m;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		this->_inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx <= 3 && this->_inventory[idx] != nullptr)
		this->_inventory[idx]->use(target);
}

