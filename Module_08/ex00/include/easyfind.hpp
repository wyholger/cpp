#ifndef EX00_EASYFIND_HPP
# define EX00_EASYFIND_HPP
# include <iostream>
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

template<typename T>
typename T::iterator easyfind (T &cont, int val)
{
	typename T::iterator elem;
	elem = std::find(cont.begin(), cont.end(), val);
	if (elem == cont.end())
		throw std::exception();
	return elem;
}


#endif
