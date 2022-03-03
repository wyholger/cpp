//
// Created by dan on 03.03.2022.
//

#ifndef EX01_CONTACT_HPP
# define EX01_CONTACT_HPP
# include <iostream>

class Contact {
public:
	Contact();
	~Contact();

	void 				displayContact();
	void 				displayAllContactInfo();
	void				setIndex(int index);
	void				setFName(const std::string &fName);
	void				setLName(const std::string &lName);
	void				setNicName(const std::string &nicName);
	void				setPhone(const std::string &phone);
	void				setDarkestSecret(const std::string &darkestSecret);
	int					getIndex() const;
	const std::string	&getFName() const;
	const std::string	&getLName() const;
	const std::string	&getNicName() const;
	const std::string	&getPhone() const;
	const std::string	&getDarkestSecret() const;

private:
	int 				index;
	std::string			fName;
	std::string			lName;
	std::string			nicName;
	std::string			phone;
	std::string			darkestSecret;



	static void printSpaces(unsigned long len);


};



#endif //EX01_CONTACT_HPP
