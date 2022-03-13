#ifndef EX03_WEAPON_HPP
# define EX03_WEAPON_HPP
# include <iostream>
# define YELLOW "\033[1;33m"
# define PURPLE "\033[0;35m"
# define RED "\033[0;31m"
# define END_COLOR "\033[0;0m"
# define ATTACK_MSG " attacks with their "

class Weapon {
private:
	std::string type;

public:
	void setType(std::string type);
	std::string const &getType() const;
	Weapon(std::string type);

	virtual ~Weapon();
};


#endif
