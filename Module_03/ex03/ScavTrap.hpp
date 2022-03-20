#ifndef EX03_SCAVTRAP_HPP
# define EX03_SCAVTRAP_HPP
# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& other);
	virtual ~ScavTrap();
	ScavTrap& operator=(const ScavTrap& other);
//	void attack(const std::string& target) override;
	void attack(const std::string& target);

private:
	void guardGate();
};

#endif
