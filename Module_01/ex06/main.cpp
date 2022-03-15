#include "Harl.hpp"

int main(int argc, char **argv) {
	Harl harl;

	switch (argc) {
		case 2:
			harl.complain(argv[1]);
			break;
		default:
			std::cout << "Wrong numbers of argument." << std::endl;
	}
	return 0;
}
