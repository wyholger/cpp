#ifndef EX03_MATERIASOURCE_HPP
# define EX03_MATERIASOURCE_HPP
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	MateriaSource(const MateriaSource &other);
	virtual ~MateriaSource();
	MateriaSource	&operator=(MateriaSource const &other);
	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);

private:
	AMateria* _inventory[4];
};


#endif
