#include "HumanA.hpp"

void HumanA::attack() {
	std::cout << YELLOW << this->_name << END_COLOR PURPLE ATTACK_MSG END_COLOR RED << this->_weapon.getType() << END_COLOR << std::endl;
}

HumanA::HumanA(const std::string &name, Weapon &weapon) : _weapon(weapon){
	setName(name);
}

void HumanA::setName(const std::string &name) {
	HumanA::_name = name;
}

void HumanA::setWeapon(const Weapon &weapon) {
	HumanA::_weapon = weapon;
}

HumanA::~HumanA() {
//	std::cout << "Destructor HumanA" << std::endl;
}
