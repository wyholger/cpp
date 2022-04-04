#ifndef EX02_MUTANTSTACK_HPP
# define EX02_MUTANTSTACK_HPP
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
# include <stack>

template<class T>
class MutantStack:  public std::stack<T>
{
public:
	MutantStack()
	{

	}
	MutantStack(const MutantStack& other)
	{
		*this = other;
	}
	MutantStack& operator=(const MutantStack& other){
		if (this == &other) {
			return *this;
		}
		std::stack<T>::operator=(other);
		return *this;
	}
	virtual ~MutantStack()
	{

	}


	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin()
	{
		return this->c.begin();
	}
	iterator end()
	{
		return this->c.end();
	}
};


#endif
