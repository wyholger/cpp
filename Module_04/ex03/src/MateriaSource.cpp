//
// Created by Wynell Holger on 3/22/22.
//

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = nullptr;
	}
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = other._inventory[i];
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		delete this->_inventory[i];
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this == &other)
		return *this;
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = other._inventory[i];
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *m)
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

AMateria *MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != nullptr && this->_inventory[i]->getType() == type)
			return(this->_inventory[i]->clone());
	}
	return nullptr;
}
