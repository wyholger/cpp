#ifndef EX00_WRONGANIMAL_HPP
# define EX00_WRONGANIMAL_HPP
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

class WrongAnimal
{
protected:
	std::string _type;
public:

	WrongAnimal();
	~WrongAnimal();

	WrongAnimal(const WrongAnimal &other);
	WrongAnimal& operator = (const WrongAnimal &other);
	void makeSound() const;
	const std::string &getType() const;
};


#endif
