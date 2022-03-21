#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/WrongCat.hpp"
#include "../include/WrongAnimal.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	return 0;
}
