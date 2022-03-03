#include "Contact.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{

}

void Contact::printSpaces(unsigned long len)
{
	while (len < 10)
	{
		std::cout << " ";
		len++;
	}
}

void Contact::displayAllContactInfo()
{
	std::cout << "First Name    : " << this->fName << std::endl;
	std::cout << "Last Name     : " << this->lName << std::endl;
	std::cout << "Nickname      : " << this->nicName << std::endl;
	std::cout << "Phone         : " << this->phone << std::endl;
	std::cout << "Darkest Secret: " << this->darkestSecret << std::endl;
}

void Contact::displayContact ()
{
	std::cout << "|" << index;
	printSpaces(1);
	std::cout << "|" << this->fName.substr(0, 10);
	if (this->fName.length() < 10)
		printSpaces(this->fName.length());
	std::cout << "|" << this->lName.substr(0, 10);
	if (this->lName.length() < 10)
		printSpaces(this->lName.length());
	std::cout << "|" << this->nicName.substr(0, 10);
	if (this->nicName.length() < 10)
		printSpaces(this->nicName.length());
	std::cout << "|" << std::endl;
}

int Contact::getIndex() const {
	return index;
}

const std::string &Contact::getFName() const {
	return fName;
}

const std::string &Contact::getLName() const {
	return lName;
}

const std::string &Contact::getNicName() const {
	return nicName;
}

const std::string &Contact::getPhone() const {
	return phone;
}

const std::string &Contact::getDarkestSecret() const {
	return darkestSecret;
}

void Contact::setIndex(int index) {
	Contact::index = index;
}

void Contact::setFName(const std::string &fName) {
	Contact::fName = fName;
}

void Contact::setLName(const std::string &lName) {
	Contact::lName = lName;
}

void Contact::setNicName(const std::string &nicName) {
	Contact::nicName = nicName;
}

void Contact::setPhone(const std::string &phone) {
	Contact::phone = phone;
}

void Contact::setDarkestSecret(const std::string &darkestSecret) {
	Contact::darkestSecret = darkestSecret;
}

