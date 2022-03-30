#include <iostream>
#include <unistd.h>
#include "../include/Base.hpp"
#include "../include/A.hpp"
#include "../include/B.hpp"
#include "../include/C.hpp"
#define YELLOW "\033[0;33m"
#define PURPLE "\033[0;35m"
#define RED "\033[0;31m"
#define BLUE "\033[0;34m"
#define GREEN "\033[0;32m"
#define DARK_YELLOW "\033[2;33m"
#define DARK_PURPLE "\033[2;35m"
#define DARK_RED "\033[2;31m"
#define DARK_GREEN "\033[2;32m"
#define END "\033[0;0m"

Base *generate(void)
{
	Base *ptr;
	int rand;
	std::srand(time(NULL));
	rand = std::rand() % 3;
	switch (rand)
	{
		case 0:
			ptr = new A;
			break;
		case 1:
			ptr = new B;
			break;
		case 2:
			ptr = new C;
			break;
	}
	return ptr;
}

void identify(Base* p)
{
	std::cout << PURPLE << "Identify pointer:" << END << std::endl;
	
	A *a = dynamic_cast<A*>(p);

	if (a) 
	{
		std::cout << YELLOW "Type is A" END << std::endl;
		return;
	}

	B *b = dynamic_cast<B*>(p);
	if (b) 
	{
		std::cout << YELLOW "Type is B" END<< std::endl;
		return;
	}

	C *c = dynamic_cast<C*>(p);
	if (c)
		std::cout << YELLOW "Type is C" END<< std::endl;

}

void identify(Base& p)
{
	std::cout << PURPLE << "Identify reference:" << END << std::endl;

	try 
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << YELLOW "Type is A" END << std::endl;
		(void)a;
		return;
	}
	catch (std::bad_cast& bc) 
	{

	}

	try 
	{
		B& b = dynamic_cast<B&>(p);
		std::cout << YELLOW "Type is B" END << std::endl;
		(void)b;
		return;
	}
	catch (std::bad_cast& bc) 
	{

	}

	try
	{
		C& c = dynamic_cast<C&>(p);
		std::cout << YELLOW "Type is C" END << std::endl;
		(void)c;
	}
	catch (std::bad_cast& bc)
	{

	}
}

int main()
{
	for (int i = 0; i < 15; i++) {
		std::cout << "____Start test #" << i << "____" << std::endl;
		Base * ptr = generate();
		identify(ptr);
		identify(*ptr);
		delete ptr;
		usleep(300000); // for random result

	}

	return 0;
}
