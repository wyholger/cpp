#ifndef EX03_DIAMONDTRAP_HPP
# define EX03_DIAMONDTRAP_HPP
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public virtual ScavTrap, public virtual FragTrap
{
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& other);
	virtual ~DiamondTrap();
private:
	std::string _name;
};


#endif //EX03_DIAMONDTRAP_HPP
