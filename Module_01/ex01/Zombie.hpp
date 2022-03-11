//
// Created by dan on 11.03.2022.
//

#ifndef EX01_ZOMBIE_HPP
#define EX01_ZOMBIE_HPP
#include <iostream>

class Zombie {
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void announce() const;
	void setName(std::string name);
private:
	std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif //EX01_ZOMBIE_HPP
