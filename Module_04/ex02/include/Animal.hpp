//
// Created by Wynell Holger on 3/21/22.
//

#ifndef EX00_ANIMAL_HPP
# define EX00_ANIMAL_HPP
# define YELLOW "\033[0;33m"
# define PURPLE "\033[0;35m"
# define RED "\033[0;31m"
# define BLUE "\033[0;34m"
# define GREEN "\033[0;32m"
# define DARK_YELLOW "\033[2;33m"
# define DARK_PURPLE "\033[2;35m"
# define DARK_RED "\033[2;31m"
# define DARK_GREEN "\033[2;32m"
# define END_COLOR "\033[0;0m"
# include <iostream>

class Animal
{
protected:
	std::string _type;
public:

	Animal();
//	Animal(std::string type);
	virtual ~Animal();

	Animal(const Animal &other);
	Animal& operator = (const Animal &other);
	virtual void makeSound() const = 0;
	const std::string &getType() const;
};


#endif //EX00_ANIMAL_HPP
