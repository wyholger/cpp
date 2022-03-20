#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

void test_crap_trap()
{
	std::cout << "---Start testing scav trap---" << std::endl;
	ScavTrap bob("Bob");

	bob.guardGate();
	bob.attack("Karl");
	bob.takeDamage(7);
	bob.beRepaired(4);

	std::cout << "---End testing scav trap---" << std::endl;
}

void test_canonical()
{
	std::cout << "---Start testing canonical---" << std::endl;
	ScavTrap a("Bob");
	ScavTrap b(a);
	ScavTrap c;
	ScavTrap d("Karl");
	c = b;
	std::cout << "---End testing canonical---" << std::endl;
}

int main()
{
	test_crap_trap();
	test_canonical();
	return 0;
}
