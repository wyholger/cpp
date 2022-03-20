#ifndef EX02_SCAVTRAP_HPP
#define EX02_SCAVTRAP_HPP
# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& other);
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap& other);
	void attack(const std::string& target);

private:
	void guardGate();
};


#endif
