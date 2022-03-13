#include "Weapon.hpp"

std::string const  &Weapon::getType() const {
	return type;
}

void Weapon::setType(std::string type) {
	Weapon::type = type;
}

Weapon::Weapon(std::string type) {
	setType(type);
}

Weapon::~Weapon() {
//	std::cout << "Destructor weapon" << std::endl;
}
