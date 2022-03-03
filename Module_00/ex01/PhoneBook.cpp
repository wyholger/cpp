#include "PhoneBook.hpp"

PhoneBook::PhoneBook ()
{
	run();
}

PhoneBook::~PhoneBook()
{

}

void PhoneBook::run()
{
	std::string	str;
	int 		i = 0;
	bool		loop = true;

	while (loop)
	{
		std::cout << ">";
		std::getline(std::cin, str);

		if (str == "EXIT")
		{
			std::cout << "Bye - bye" << std::endl;
			loop = false;
		}
		else if (str != "ADD" && str != "SEARCH")
		{
			std::cout << "the correct commands are: ADD, SEARCH, EXIT." << std::endl;
			continue;
		}
		else if (str == "ADD")
		{
			if (add(i))
				i++;
		}
		else if (str == "SEARCH")
		{
			searchContact(i);
		}
	}
}

void PhoneBook::printHeader ()
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|  Index   |First Name| Last Name| Nickname |" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
}

bool PhoneBook::checkStrToInt(std::string str, int i)
{
	if (str[0] >= '0' && str[0] < i + '0')
		return true;
	else
		return false;
}

void PhoneBook::searchContact (int i)
{
	int 		j = 0;
	std::string	str;

	if (i >= 8)
		i = 8;
	if (i == 0)
	{
		std::cout << "Contact list is empty. Use command \"ADD\" for adding contact." << std::endl;
		return;
	}
	printHeader();
	while (j < i)
	{
		contact[j].displayContact();
		j++;
	}
	std::cout << "Display a contact by index (enter the index): ";
	std::getline(std::cin, str);
	if (str.length() != 1 || !std::isdigit(str[0]) || !checkStrToInt(str, i))
	{
		std::cout << "Error. Invalid index." << std::endl;
		return;
	}
	else
		contact[str[0] - '0'].displayAllContactInfo();
}

bool PhoneBook::checkStr (const std::string& str)
{
	if (str.length() == 0)
		return false;
	else
		return true;
}

std::string PhoneBook::readStr (const std::string& massage)
{
	std::string	str;

	std::cout << massage;
	std::getline(std::cin, str);
	return str;
}

bool PhoneBook::breakAdd (int i)
{
	contact[i].setFName("");
	contact[i].setLName("");
	contact[i].setNicName("");
	contact[i].setPhone("");
	contact[i].setDarkestSecret("");
	std::cout << "Error, the field cannot be empty." << std::endl;
	return false;
}

bool PhoneBook::add(int i)
{
	std::string	str;

	if (i >= 8)
		i = i % 8;
	contact[i].setIndex(i);
	str = readStr("Enter a first name: ");
	if (!checkStr(str))
		return breakAdd(i);
	contact[i].setFName(str);
	str = readStr("Enter a last name: ");
	if (!checkStr(str))
		return breakAdd(i);
	contact[i].setLName(str);
	str = readStr("Enter a nickname: ");
	if (!checkStr(str))
		return breakAdd(i);
	contact[i].setNicName(str);
	str = readStr("Enter a phone: ");
	if (!checkStr(str))
		return breakAdd(i);
	contact[i].setPhone(str);
	str = readStr("Enter a darkest secret: ");
	if (!checkStr(str))
		return breakAdd(i);
	contact[i].setDarkestSecret(str);
	std::cout << "Contact successfully added." << std::endl;
	return true;
}

