//
// Created by Wynell Holger on 3/15/22.
//

#include "Harl.h"

Harl::Harl() {
	this->_level[0] = "DEBUG";
	this->_level[1] = "INFO";
	this->_level[2] = "WARNING";
	this->_level[3] = "ERROR";
}

void Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
	int index = -1;
	for (int i = 0; i < 4; i++) {
		if (level == this->_level[i])
			index = i;
	}
	switch (index) {
		case 0:
			this->_func = &Harl::debug;
			break;
		case 1:
			this->_func = &Harl::info;
			break;
		case 2:
			this->_func = &Harl::warning;
			break;
		case 3:
			this->_func = &Harl::error;
			break;
		default:
			this->_func = &Harl::indefinite;
			break;
	}
	(this->*_func)();
}

void Harl::indefinite(void) {
	std::cout << "Invalid parameter" << std::endl;
}

Harl::~Harl() {

}
