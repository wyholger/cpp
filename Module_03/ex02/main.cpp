#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void test_fraf_trap()
{
	std::cout << "---Start testing frag trap---" << std::endl;
	FragTrap bob("Bob");

	bob.highFivesGuys();
	bob.attack("Karl");
	bob.takeDamage(7);
	bob.beRepaired(4);

	std::cout << "---End testing frag trap---" << std::endl;
}

void test_canonical()
{
	std::cout << "---Start testing canonical---" << std::endl;
	FragTrap a("Bob");
	FragTrap b(a);
	FragTrap c;
	FragTrap d("Karl");
	c = b;
	std::cout << "---End testing canonical---" << std::endl;
}

int main()
{
	test_fraf_trap();
	test_canonical();
	return 0;
}
