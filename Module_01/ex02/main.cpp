#include <iostream>

int main() {
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	std::cout << "Address string    = " << &str << std::endl;
	std::cout << "Address stringPTR = " << stringPTR << std::endl;
	std::cout << "Address stringREF = " << &stringREF << std::endl;
	std::cout << "The value of the string variable  = " << str << std::endl;
	std::cout << "The value pointed to by stringPTR = " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF = " << stringREF << std::endl;
	return 0;
}
