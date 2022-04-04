#include <iostream>
#include "../include/Span.hpp"

int main()
{
	{
		std::cout << PURPLE "___Testing add number___" END << std::endl;
		Span sp = Span(5);
		sp.addNumber(1);
		sp.addNumber(2);
		sp.addNumber(3);
		sp.addNumber(4);
		sp.addNumber(5);
		std::cout << GREEN "Shortest span {1, 2, 3, 4, 5} is " << YELLOW << sp.shortestSpan() << END << std::endl;
		std::cout << GREEN "Longest span  {1, 2, 3, 4, 5} is " << YELLOW << sp.longestSpan() << END << std::endl;
	}
	{
		std::cout << PURPLE "___Testing add range___" END << std::endl;
		std::list<int> a;
		a.push_back(1);
		a.push_back(2);
		a.push_back(3);
		a.push_back(4);
		a.push_back(5);

		Span sp = Span(5);
		sp.addRange(a.begin(), a.end());
		std::cout << GREEN "Shortest span {1, 2, 3, 4, 5} is " << YELLOW << sp.shortestSpan() << END << std::endl;
		std::cout << GREEN "Longest span  {1, 2, 3, 4, 5} is " << YELLOW << sp.longestSpan() << END << std::endl;
	}
	{
		std::cout << PURPLE "___Testing big range___" END << std::endl;
		size_t size = 1000;
		Span sp = Span(size);
		for (size_t i = 0; i < size; i++)
		{
			sp.addNumber((int)i);
		}
		std::cout << GREEN "Shortest span {0, 1, 2, 3, ..., 999} is " << YELLOW << sp.shortestSpan() << END << std::endl;
		std::cout << GREEN "Longest span  {0, 1, 2, 3, ..., 999} is " << YELLOW << sp.longestSpan() << END << std::endl;
	}
	{
		std::cout << PURPLE "___Testing case if len Span exceeds size Span___" END << std::endl;
		size_t size = 10;
		Span sp = Span(size);
		for (size_t i = 0; i < size + 1; i++)
		{
			try
			{
				sp.addNumber((int)i);
			}
			catch (std::exception &e)
			{
				std::cout << RED << e.what() << END << std::endl;
			}
		}
	}
	{
		std::cout << PURPLE "___Testing case if len Span == 1___" END << std::endl;
		size_t size = 10;
		Span sp = Span(size);
		sp.addNumber(1);
		try
		{
			sp.shortestSpan();
		}
		catch (std::exception &e)
		{
			std::cout << RED << e.what() << END << std::endl;
		}
		try
		{
			sp.longestSpan();
		}
		catch (std::exception &e)
		{
			std::cout << RED << e.what() << END << std::endl;
		}
	}
	return 0;
}
