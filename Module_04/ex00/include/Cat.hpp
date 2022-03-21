#ifndef EX00_CAT_HPP
# define EX00_CAT_HPP
# include "Animal.hpp"

class Cat : public virtual Animal
{
public:
	Cat();
	virtual ~Cat();
	Cat(const Cat& other);
	Cat& operator=(const Cat& other);
	void makeSound() const;
};


#endif
