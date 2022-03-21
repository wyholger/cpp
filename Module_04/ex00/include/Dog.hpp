#ifndef EX00_DOG_HPP
# define EX00_DOG_HPP
# include "Animal.hpp"

class Dog : public virtual Animal
{
public:
	Dog();
	virtual ~Dog();
	Dog(const Dog& other);
	Dog& operator=(const Dog& other);
	void makeSound() const;
};


#endif
