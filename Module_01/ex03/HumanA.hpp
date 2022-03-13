#ifndef EX03_HUMANA_HPP
# define EX03_HUMANA_HPP
# include "Weapon.hpp"

class HumanA { 
private:
	std::string _name;
	Weapon &_weapon;

public:
	void attack();

	HumanA(const std::string &name, Weapon &weapon);
	void setName(const std::string &name);
	void setWeapon(const Weapon &weapon);
	virtual ~HumanA();
};


#endif
