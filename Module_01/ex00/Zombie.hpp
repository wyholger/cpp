#ifndef EX00_ZOMBIE_HPP
# define EX00_ZOMBIE_HPP
# include <iostream>

class Zombie {
public:

	Zombie();
	Zombie(std::string name);
	~Zombie();
	void announce() const;

private:
	std::string _name;
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif //EX00_ZOMBIE_HPP
