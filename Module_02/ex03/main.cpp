#include "Point.hpp"
#include "Fixed.hpp"

void test_bsp()
{
	std::cout << YELLOW "---On edge---" END_COLOR << std::endl;
	std::cout << std::boolalpha << bsp(Point(0, 0), Point(0, 1), Point(1, 0), Point(0.5f, 0.5f)) << std::endl;

	std::cout << YELLOW "---On vertex---" END_COLOR << std::endl;
	std::cout << std::boolalpha << bsp(Point(0, 0), Point(0, 1), Point(1, 0), Point(0, 0)) << std::endl;
	std::cout << std::boolalpha << bsp(Point(1, 1), Point(0, 1), Point(1, 0), Point(1, 1)) << std::endl;
	std::cout << std::boolalpha << bsp(Point(1, 1), Point(0, 1), Point(1, 0), Point(0, 1)) << std::endl;
	std::cout << std::boolalpha << bsp(Point(1, 1), Point(0, 1), Point(1, 0), Point(1, 0)) << std::endl;

	std::cout << RED "---Outside---" END_COLOR << std::endl;
	std::cout << std::boolalpha << bsp(Point(0, 0), Point(0, 1), Point(1, 0), Point(1.2f, 0.7f)) << std::endl;
	std::cout << std::boolalpha << bsp(Point(0,-1), Point(1,1), Point(-1,1), Point(0, -2)) << std::endl;

	std::cout << GREEN "---Inside---" END_COLOR << std::endl;
	std::cout << std::boolalpha << bsp(Point(0, 0), Point(0, 1), Point(1, 0), Point(0.4f, 0.3f)) << std::endl;
	std::cout << std::boolalpha << bsp(Point(0,-1), Point(1,1), Point(-1,1), Point(0, 0.959f)) << std::endl;
}

void test_point()
{
	{
		std::cout << PURPLE "---Copy Constructor---" END_COLOR << std::endl;
		Point original(13.5f, 52.28f);
		Point copy(original);
		std::cout << "original: x = " << original.getX() << ", y = " << original.getY()<< std::endl;
		std::cout << "copy    : x = " << copy.getX() << ", y = " << copy.getY()<< std::endl;
	}
	{
		std::cout << PURPLE "---Assignment Operator---" END_COLOR << std::endl;
		Point original(24.14f, 64.1f);
		Point copy(52.19f, 98.36f);
		std::cout << "before original: x = " << original.getX() << ", y = " << original.getY()<< std::endl;
		std::cout << "before copy    : x = " << copy.getX() << ", y = " << copy.getY()<< std::endl;
		copy = original;
		std::cout << "after copy     : x = " << copy.getX() << ", y = " << copy.getY()<< std::endl;
	}
}

int main()
{
	test_bsp();
	test_point();
	return 0;
}
