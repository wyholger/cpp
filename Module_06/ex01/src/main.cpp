#include <iostream>
#define YELLOW "\033[0;33m"
#define PURPLE "\033[0;35m"
#define RED "\033[0;31m"
#define BLUE "\033[0;34m"
#define GREEN "\033[0;32m"
#define DARK_YELLOW "\033[2;33m"
#define DARK_PURPLE "\033[2;35m"
#define DARK_RED "\033[2;31m"
#define DARK_GREEN "\033[2;32m"
#define END "\033[0;0m"

struct Data {
	std::string name;
	int age;
};

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int main() {

	Data data;

	data.name = "Bob";
	data.age = 42;

	std::cout << PURPLE << "The content of the created structure." << END << std::endl;
	std::cout << YELLOW << data.name << END << std::endl;
	std::cout << YELLOW << data.age << END << std::endl;

	std::cout << PURPLE << "The address structure pointer." << END << std::endl;
	uintptr_t x = serialize(&data);

	std::cout << BLUE << x << END << std::endl;

	std::cout << PURPLE << "The content by pointer to structure." << END << std::endl;
	Data* copy = deserialize(x);

	std::cout << YELLOW << copy->name << END << std::endl;
	std::cout << YELLOW << copy->age << END << std::endl;

	return 0;
}
