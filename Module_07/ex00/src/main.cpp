#include "../include/main.hpp"

void testing_my(void)
{
	std::cout << std::endl << GREEN "______Test swap______" END << std::endl;
	{
		std::cout << std::endl << PURPLE "___Test int___" END << std::endl;
		int a = 5;
		int b = 10;
		std::cout << BLUE "a = " YELLOW << a << END << std::endl;
		std::cout << BLUE "b = " YELLOW << b << END << std::endl;
		::swap(a, b);
		std::cout << BLUE "a = " YELLOW << a << END << std::endl;
		std::cout << BLUE "b = " YELLOW << b << END << std::endl;
	}
	{
		std::cout << std::endl << PURPLE "___Test string___" END << std::endl;
		std::string a = "qwe";
		std::string b = "asd";
		std::cout << BLUE "a = " YELLOW << a << END << std::endl;
		std::cout << BLUE "b = " YELLOW << b << END << std::endl;
		::swap(a, b);
		std::cout << BLUE "a = " YELLOW << a << END << std::endl;
		std::cout << BLUE "b = " YELLOW << b << END << std::endl;
	}
	{
		std::cout << std::endl << PURPLE "___Test double___" END << std::endl;
		double a = 42.3;
		double b = 21.6;
		std::cout << BLUE "a = " YELLOW << a << END << std::endl;
		std::cout << BLUE "b = " YELLOW << b << END << std::endl;
		::swap(a, b);
		std::cout << BLUE "a = " YELLOW << a << END << std::endl;
		std::cout << BLUE "b = " YELLOW << b << END << std::endl;
	}
	std::cout << std::endl << GREEN "______Test min______" END << std::endl;
	{
		std::cout << std::endl << PURPLE "___Test int___" END << std::endl;
		int a = 5;
		int b = 10;
		int c;
		std::cout << BLUE "a = " YELLOW << a << END << std::endl;
		std::cout << BLUE "b = " YELLOW << b << END << std::endl;
		c = ::min(a, b);
		std::cout << BLUE "min = " YELLOW << c << END << std::endl;
	}
	{
		std::cout << std::endl << PURPLE "___Test char___" END << std::endl;
		char a = 'q';
		char b = 'a';
		char c;
		std::cout << BLUE "a = " YELLOW << a << END << std::endl;
		std::cout << BLUE "b = " YELLOW << b << END << std::endl;
		c = ::min(a, b);
		std::cout << BLUE "min = " YELLOW << c << END << std::endl;
	}
	{
		std::cout << std::endl << PURPLE "___Test double___" END << std::endl;
		double a = 42.3;
		double b = 21.6;
		double c;
		std::cout << BLUE "a = " YELLOW << a << END << std::endl;
		std::cout << BLUE "b = " YELLOW << b << END << std::endl;
		c = ::min(a, b);
		std::cout << BLUE "min = " YELLOW << c << END << std::endl;
	}
	std::cout << std::endl << GREEN "______Test max______" END << std::endl;
	{
		std::cout << std::endl << PURPLE "___Test int___" END << std::endl;
		int a = 5;
		int b = 10;
		int c;
		std::cout << BLUE "a = " YELLOW << a << END << std::endl;
		std::cout << BLUE "b = " YELLOW << b << END << std::endl;
		c = ::max(a, b);
		std::cout << BLUE "max = " YELLOW << c << END << std::endl;
	}
	{
		std::cout << std::endl << PURPLE "___Test char___" END << std::endl;
		char a = 'q';
		char b = 'a';
		char c;
		std::cout << BLUE "a = " YELLOW << a << END << std::endl;
		std::cout << BLUE "b = " YELLOW << b << END << std::endl;
		c = ::max(a, b);
		std::cout << BLUE "max = " YELLOW << c << END << std::endl;
	}
	{
		std::cout << std::endl << PURPLE "___Test double___" END << std::endl;
		double a = 42.3;
		double b = 21.6;
		double c;
		std::cout << BLUE "a = " YELLOW << a << END << std::endl;
		std::cout << BLUE "b = " YELLOW << b << END << std::endl;
		c = ::max(a, b);
		std::cout << BLUE "max = " YELLOW << c << END << std::endl;
	}
}

void testing_subject(void)
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}

int main()
{
	testing_my();
//	testing_subject();
	return 0;
}
