#include "../include/Cure.hpp"

Cure::Cure() : AMateria("cure")
{

}

Cure::Cure(const Cure& other)
{
	this->type_ = other.type_;
}

Cure::~Cure()
{

}

Cure &Cure::operator=(const Cure &other)
{
	if (this == &other)
		return *this;
	this->type_ = other.type_;
	return *this;
}

Cure *Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " <<  target.getName() << "'s wounds *" << std::endl;
}
