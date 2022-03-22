#ifndef EX03_CURE_HPP
# define EX03_CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure& other);
	virtual ~Cure();
	Cure& operator=(const Cure& other);
	Cure* clone() const;
	void use(ICharacter& target);
};


#endif
