#include "ClapTrap.hpp"

void test_crap_trap()
{
	std::cout << "---Start testing crap trap---" << std::endl;
	ClapTrap bob("Bob");

	bob.attack("Karl");
	bob.takeDamage(7);
	bob.beRepaired(4);
	std::cout << "---End testing crap trap---" << std::endl;
}

void test_canonical()
{
	std::cout << "---Start testing canonical---" << std::endl;
	ClapTrap a("Bob");
	ClapTrap b(a);
	ClapTrap c;
	ClapTrap d("Karl");
	c = b;
	std::cout << "---End testing canonical---" << std::endl;
}

int main()
{
	test_crap_trap();
	test_canonical();
	return 0;
}
