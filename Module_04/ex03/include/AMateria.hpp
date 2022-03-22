#ifndef EX03_AMATERIA_HPP
# define EX03_AMATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string type_;
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria& other);
	AMateria &operator=(const AMateria &other);
	virtual ~AMateria();
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif
