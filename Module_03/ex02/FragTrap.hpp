#ifndef EX02_FRAGTRAP_HPP
# define EX02_FRAGTRAP_HPP
# include "ScavTrap.hpp"

class FragTrap : public ScavTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& other);
	~FragTrap();
	FragTrap& operator=(const FragTrap& other);
	void attack(const std::string& target);
	void highFivesGuys(void);
};

#endif
