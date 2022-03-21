#ifndef EX01_BRAIN_HPP
# define EX01_BRAIN_HPP
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

class Brain
{
public:
	Brain();
	virtual ~Brain();
	Brain(const Brain& other);
	Brain& operator=(const Brain& other);

private:
	std::string _ideas[100];
};

#endif
