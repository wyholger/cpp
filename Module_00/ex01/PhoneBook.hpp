#ifndef EX01_PHONEBOOK_HPP
# define EX01_PHONEBOOK_HPP
# include <iostream>
# include <string>
# include "Contact.hpp"

class PhoneBook {

public:
	PhoneBook();
	~PhoneBook();

private:
	Contact		contact[8];

	void	run ();
	bool	add (int i);
	static bool checkStr(const std::string& str);
	static std::string readStr(const std::string& massage);

	bool breakAdd(int i);

	void searchContact(int i);

	static void printHeader();

	static bool checkStrToInt(std::string str, int i);
};


#endif //EX01_PHONEBOOK_HPP
