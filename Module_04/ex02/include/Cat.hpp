#ifndef EX00_CAT_HPP
# define EX00_CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public virtual Animal
{
public:
	Cat();
	virtual ~Cat();
	Cat(const Cat& other);
	Cat& operator=(const Cat& other);
	void makeSound() const;

private:
	Brain *_brain;
};


#endif
