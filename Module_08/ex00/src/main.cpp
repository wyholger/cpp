#include <iostream>
#include <vector>
#include <exception>
#include <list>
#include "../include/easyfind.hpp"


int main()
{
	{
		std::cout << PURPLE "___Test successful search case for vector___" END << std::endl;
		std::vector<int> x;
		x.push_back(1);
		x.push_back(3);
		x.push_back(8);
		x.push_back(12);
		x.push_back(15);
		std::vector<int>::iterator it;
		try
		{
			it = easyfind(x, 3);
			std::cout << GREEN "Find " YELLOW << *it << END << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << RED "No find." END << std::endl;
		}
		std::cout << PURPLE "___Test failed search case for vector___" END << std::endl;
		try
		{
			it = easyfind(x, 2);
			std::cout << GREEN "Find " YELLOW << *it << END << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << RED "No find." END << std::endl;
		}
		std::list<int> list;
		list.push_back(1);
		list.push_back(3);
		list.push_back(8);
		list.push_back(12);
		list.push_back(15);
		std::list<int>::iterator l_it;
		std::cout << PURPLE "___Test successful search case for list___" END << std::endl;
		try
		{
			l_it = easyfind(list, 8);
			std::cout << GREEN "Find " YELLOW << *l_it << END << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << RED "No find." END << std::endl;
		}
		std::cout << PURPLE "___Test failed search case for list___" END << std::endl;
		try
		{
			l_it = easyfind(list, 9);
			std::cout << GREEN "Find " YELLOW << *l_it << END << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << RED "No find." END << std::endl;
		}
	}
    return 0;
}
