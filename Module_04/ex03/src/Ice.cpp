#include "../include/Ice.hpp"

Ice::Ice() : AMateria("ice")
{

}

Ice::Ice(const Ice& other)
{
	this->type_ = other.type_;
}

Ice::~Ice()
{

}

Ice &Ice::operator=(const Ice &other)
{
	if (this == &other)
		return *this;
	this->type_ = other.type_;
	return *this;
}

Ice *Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " <<  target.getName() << " *" << std::endl;
}
