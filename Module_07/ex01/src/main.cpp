#include "../include/iter.hpp"

template<typename T>
void print(T const & x)
{
	std::cout << YELLOW << x << END << std::endl;
}

int main()
{
	{
		std::cout << PURPLE "___Testing int arr___" END << std::endl;
		int arr[] = {1, 2, 3, 4};
		iter(arr, 4, &print);
	}
	{
		std::cout << PURPLE "___Testing string arr___" END << std::endl;
		std::string arr[] = {"Bob", "Karl", "Bill", "John"};
		iter(arr, 4, &print);
	}
	{
		std::cout << PURPLE "___Testing double arr___" END << std::endl;
		double arr[] = {86.2843, 96.0085, 	11.3551, 18.4763};
		iter(arr, 4, &print);
	}
	return 0;
}