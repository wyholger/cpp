#ifndef EX03_FRAGTRAP_HPP
# define EX03_FRAGTRAP_HPP
# include "ScavTrap.hpp"

class FragTrap : public ScavTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& other);
	virtual ~FragTrap();
	FragTrap& operator=(const FragTrap& other);
	void attack(const std::string& target);
	void highFivesGuys(void);
};
#endif
