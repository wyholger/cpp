#ifndef EX03_ICE_HPP
# define EX03_ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice& other);
	virtual ~Ice();
	Ice& operator=(const Ice& other);
	Ice* clone() const;
	void use(ICharacter& target);
};


#endif
