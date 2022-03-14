#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

std::string create_new_line (std::string line, std::string to_find, std::string replace)
{
	std::size_t found = 0;
	std::string token;
	while ((found = line.find(to_find)) != std::string::npos)
	{
		line.erase(found, to_find.length());
		line.insert(found, replace);
	}
	return line;
}

int main(int argc, char **argv) {
	std::string line;
	std::string file_out_name;
	if (argc != 4)
	{
		std::cout << "You have to enter 3 arguments: 1.[Name_file] 2.[The_replaced_word] 3.[Replacement_word]" << std::endl;
		return 0;
	}
	file_out_name = argv[1];
	file_out_name += ".replace";
	std::ifstream in(argv[1]);
	std::ofstream out;
	out.open(file_out_name);
	if (in.is_open())
	{
		while (getline(in, line))
		{
			line = create_new_line(line, argv[2], argv[3]);
			out << line << std::endl;
		}
		std::cout << "Successful replacement. The result is in the file " << file_out_name << std::endl;
	}
	else
		std::cout << "Error. Open file error." << std::endl;
	return 0;

}
