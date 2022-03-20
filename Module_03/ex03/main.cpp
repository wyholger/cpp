#include "FragTrap.hpp"

int main()
{
	ScavTrap a("Sam");
	ClapTrap *b = &a;
	b->attack("Bob");

	return 0;
}
