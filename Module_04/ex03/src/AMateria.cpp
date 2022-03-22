//
// Created by Wynell Holger on 3/22/22.
//

#include "../include/AMateria.hpp"

AMateria::AMateria(const std::string &type) : type_(type)
{

}

AMateria::AMateria() : type_("")
{

}

std::string const &AMateria::getType() const
{
	return type_;
}

AMateria::AMateria(const AMateria &other)
{
	this->type_ = other.type_;
}

void AMateria::use(ICharacter &target)
{
	std::cout << "* use " <<  target.getName() << "'s Amateria *" << std::endl;
}

AMateria::~AMateria()
{

}

AMateria &AMateria::operator=(const AMateria &other)
{
	if (this == &other)
		return *this;
	this->type_ = other.type_;
	return *this;
}

