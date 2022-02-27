#include <iostream>

char to_up_char (char a)
{
	if (a >= 'a' && a <= 'z')
		return (a - ('a' - 'A'));
	else
		return a;
}

int main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			for (int j = 0; argv[i][j]; j++)
				std::cout << to_up_char(argv[i][j]);
		}
		std::cout << std::endl;
	}
	return 0;
}

