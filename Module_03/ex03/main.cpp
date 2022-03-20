#include "FragTrap.hpp"

int main()
{
	ScavTrap *a = new ScavTrap("Sam");
	ClapTrap *b = a;
	b->attack("Bob");

	return 0;
}
