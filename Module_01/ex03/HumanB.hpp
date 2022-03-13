#ifndef EX03_HUMANB_HPP
# define EX03_HUMANB_HPP
# include "Weapon.hpp"

class HumanB {
private:
	std::string _name;
	Weapon *_weapon;

public:
	void attack();
	HumanB(const std::string &name);
	void setName(const std::string &name);
	void setWeapon(Weapon &weapon);
	~HumanB();
};
#endif
