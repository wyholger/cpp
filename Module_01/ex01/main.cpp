#include "Zombie.hpp"

int main() {
	int num;
	std::string name;
	Zombie *zombies;

	std::cout << "Enter the number of zombies: ";
	std::cin >> num;
	std::cout << "Enter thr name: ";
	std::cin >> name;
	zombies = zombieHorde(num, name);
	for (int i = 0; i < num; i++) {
		zombies[i].announce();
	}
	delete [] zombies;
	return 0;
}
