#include "Zombie.hpp"

int main() {
	Zombie first;
	Zombie second("Second");
	Zombie* third = newZombie("Third");

	first.announce();
	second.announce();
	third->announce();
	randomChump("Fourth");
	delete third;
	return 0;
}
