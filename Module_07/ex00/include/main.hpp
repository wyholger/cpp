#ifndef EX00_MAIN_HPP
# define EX00_MAIN_HPP
# define YELLOW "\033[0;33m"
# define PURPLE "\033[0;35m"
# define RED "\033[0;31m"
# define BLUE "\033[0;34m"
# define GREEN "\033[0;32m"
# define DARK_YELLOW "\033[2;33m"
# define DARK_PURPLE "\033[2;35m"
# define DARK_RED "\033[2;31m"
# define DARK_GREEN "\033[2;32m"
# define END "\033[0;0m"
# include <iostream>


template<typename T>

void swap(T &a, T &b)
{
	std::cout << PURPLE "Swapping..." END << std::endl;
	T c;
	c = a;
	a = b;
	b = c;
}

template<typename T>

T min(T a, T b)
{
	std::cout << PURPLE "Mining..." END << std::endl;
	if (a <= b)
		return a;
	return b;
}

template<typename T>

T max(T a, T b)
{
	std::cout << PURPLE "Maxing..." END << std::endl;
	if (a >= b)
		return a;
	return b;
}
#endif
