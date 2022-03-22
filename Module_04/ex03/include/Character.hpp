#ifndef EX03_CHARACTER_HPP
# define EX03_CHARACTER_HPP
# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <iostream>

class Character : public ICharacter
{
public:
	Character();
	Character(std::string name);
	virtual ~Character();
	Character(const Character& other);
	Character& operator=(const Character& other);

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);


private:
	std::string _name;
	AMateria *_inventory[4];
};

#endif
