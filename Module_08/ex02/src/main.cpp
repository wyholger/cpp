#include <iostream>
#include "../include/MutantStack.hpp"
int main()
{
	{
		std::cout << PURPLE "___Test MutantStack methods___" END << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << GREEN "MutantStack .top() is " YELLOW << mstack.top() << END << std::endl;
		std::cout  << GREEN "MutantStack .size() before .pop() is " YELLOW <<  mstack.size() << END << std::endl;
		mstack.pop();
		std::cout  << GREEN "MutantStack .size() after .pop() is " YELLOW <<  mstack.size() << END << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		std::cout << PURPLE "___Test MutantStack iterators #1___" END << std::endl;
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << YELLOW << *it << END << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	{
		std::cout << PURPLE "___Test MutantStack iterator #2___" END << std::endl;
		MutantStack<std::string> mstack2;
		for (int i = 0; i < 10; i++)
			mstack2.push("str_" + std::to_string(i));
		MutantStack<std::string>::iterator it2 = mstack2.begin();
		MutantStack<std::string>::iterator ite2 = mstack2.end();
		while (it2 != ite2)
		{
			std::cout << YELLOW << *it2 << END << std::endl;
			++it2;
		}
	}
	return 0;
}
