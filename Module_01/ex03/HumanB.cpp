//
// Created by Wynell Holger on 3/13/22.
//

#include "HumanB.hpp"

void HumanB::attack() {
	if (!_weapon)
	{
		std::cout << YELLOW << this->_name << PURPLE " weapon is not equip." END_COLOR << std::endl;
		return;
	}
	std::cout << YELLOW << this->_name << END_COLOR PURPLE ATTACK_MSG END_COLOR RED << this->_weapon->getType() << END_COLOR << std::endl;
}

HumanB::HumanB(const std::string &name) : _weapon(NULL)
{
	setName(name);
}

void HumanB::setName(const std::string &name) {
	HumanB::_name = name;
}

void HumanB::setWeapon(Weapon &weapon) {
	HumanB::_weapon = &weapon;
}

HumanB::~HumanB() {
//	std::cout << "Destructor HumanB" << std::endl;
}
