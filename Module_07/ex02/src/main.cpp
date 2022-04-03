#include "../include/Array.hpp"
#include <random>
#include <chrono>

int main()
{
	{
		std::cout << std::endl << PURPLE "___Testing standard initialisation compared to int arr___" END << std::endl;
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		//random stuff
		std::random_device dev;
		std::mt19937 rng(dev());
		std::uniform_int_distribution<std::mt19937::result_type> dist6(-500,500);
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = dist6(rng);
			numbers[i] = value;
			mirror[i] = value;
			if (i % 300 == 0)
			{
				std::cout << GREEN <<  "Array[" << i <<"] is " YELLOW << numbers[i];
				std::cout << GREEN " Int mirror[" << i <<"] is " YELLOW << mirror[i] << END << std::endl;
			}
		}
		std::cout << std::endl << PURPLE "___Testing operator '=' and constructor copy___" END << std::endl;
		Array<int> tmp = numbers;
		Array<int> copy(tmp);
		for (int i = 0; i < MAX_VAL; i++)
		{
			if (i % 300 == 0)
			{
				std::cout << GREEN <<  "Copy_1 array[" << i <<"] is " YELLOW << tmp[i];
				std::cout << GREEN " Copy_2 array[" << i <<"] is " YELLOW << copy[i] << END << std::endl;
			}
		}
		std::cout << std::endl << PURPLE "___Testing operator '[]', normal anf if index out of range___" END << std::endl;
		try
		{
			std::cout << GREEN "Array [5] == " YELLOW << numbers[5] << END << std::endl;
			numbers[5] = 0;
			std::cout << GREEN "Array [5] == " YELLOW << numbers[5] << END << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << RED << e.what() << END << std::endl;
		}
		try
		{
			std::cout << GREEN "Array [MAX_VAL + 1]" END << std::endl;
			numbers[MAX_VAL + 1] = 0;
		}
		catch(const std::exception& e)
		{
			std::cout << RED << e.what() << END << std::endl;
		}
		try
		{
			std::cout << GREEN "Array [-5]" END << std::endl;
			numbers[-5] = 0;
		}
		catch(const std::exception& e)
		{
			std::cout << RED << e.what() << END << std::endl;
		}
		delete [] mirror;
	}
}