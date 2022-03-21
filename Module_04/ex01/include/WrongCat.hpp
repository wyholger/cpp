#ifndef EX00_WRONGCAT_HPP
# define EX00_WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat &src);
	WrongCat& operator=(const WrongCat &other);
	~WrongCat();
	void makeSound() const;
};


#endif
