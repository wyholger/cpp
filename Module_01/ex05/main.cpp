#include "Harl.h"

int main() {
	Harl harl;

	std::cout << RED << "Testing DEBUG case:" << END_COLOR << std::endl;
	harl.complain("DEBUG");
	std::cout << RED << "Testing INFO case:" << END_COLOR << std::endl;
	harl.complain("INFO");
	std::cout << RED << "Testing WARNING case:" << END_COLOR << std::endl;
	harl.complain("WARNING");
	std::cout << RED << "Testing ERROR case:" << END_COLOR << std::endl;
	harl.complain("ERROR");
	std::cout << RED << "Testing INVALID case:" << END_COLOR << std::endl;
	harl.complain("qwe");
	return 0;
}
