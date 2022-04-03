#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

template<typename T>
typename T::iterator easyfind (T &cont, int val)
{
	typename T::iterator elem;
	elem = std::find(cont.begin(), cont.end(), val);
	if (elem == cont.end())
		throw std::exception();
	return elem;
}

int main()
{
	{
		std::cout << "___Test successful search case for " " vector___" << std::endl;
		int arr[5] = {1, 3, 65, 82, -345};
		std::vector<int> x(arr, 5 + arr);
		std::vector<int>::iterator it;

		try
		{
			it = easyfind(x, 3);
			std::cout << *it << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "No find " << std::endl;
		}
	}
    return 0;
}
