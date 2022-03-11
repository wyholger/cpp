#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->_name = name;
}

Zombie::Zombie() {
	this->_name = "No_name";
}

Zombie::~Zombie() {
	std::cout << "\033[0;32mZombie by name \033[0;0m\033[1;33m" << this->_name << "\033[0;0m\033[0;31m is at rest.\033[0;0m" << std::endl;
}

void Zombie::announce() const {
	std::cout << "\033[1;33m" << this->_name << "\033[0;0m: \033[0;35mBraiiiiiiinnnzzzZ...\033[0;0m" << std::endl;
}
