#ifndef EX01_ITER_HPP
# define EX01_ITER_HPP
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
void iter(T *mas, size_t len, void (*f)(const T& item))
{
	for (size_t i = 0; i < len; i++)
		f(mas[i]);
}
#endif
