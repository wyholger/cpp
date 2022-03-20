#ifndef EX01_CLAPTRAP_HPP
# define EX01_CLAPTRAP_HPP
# define YELLOW "\033[0;33m"
# define PURPLE "\033[0;35m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define DARK_YELLOW "\033[2;33m"
# define DARK_PURPLE "\033[2;35m"
# define DARK_RED "\033[2;31m"
# define DARK_GREEN "\033[2;32m"
# define END_COLOR "\033[0;0m"
# include <iostream>

class ClapTrap
{
protected:
	std::string 	name_;
	unsigned int	hp_;
	unsigned int	mp_;
	unsigned int	damage_;
public:
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();

	ClapTrap(const ClapTrap &other);

	ClapTrap& operator = (const ClapTrap &other);

	void setName(const std::string &name);
	void setHp(int hp);
	void setMp(int mp);
	void setDamage(int damage);
	const std::string &getName() const;
	int getHp() const;
	int getMp() const;
	int getDamage() const;

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
#endif