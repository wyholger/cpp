#include "../include/convert.hpp"

template<typename T>
void output(const std::string& str, T val, bool flag_f_suffix, bool char_quotes, bool dot_zero_flag)
{
	if (flag_f_suffix && dot_zero_flag)
		std::cout << BLUE << str << YELLOW << val << DOT_ZERO << SUFF_F << END << std::endl;
	else if (flag_f_suffix && dot_zero_flag == false)
		std::cout << BLUE << str << YELLOW << val << SUFF_F << END << std::endl;
	else if (flag_f_suffix == false && dot_zero_flag)
		std::cout << BLUE << str << YELLOW << val << DOT_ZERO << END << std::endl;
	else if (char_quotes)
		std::cout << BLUE << str << YELLOW << "'" << val << "'" << END << std::endl;
	else
		std::cout << BLUE << str << YELLOW << val << END << std::endl;
}

long int to_long_int(char const *s)
{
	bool negate = (s[0] == '-');
	if ( *s == '+' || *s == '-' )
		++s;
	long int result = 0;
	while(*s)
	{
		result = result * 10  - (*s - '0');  //assume negative number
		++s;
	}
	return negate ? result : -result; //-result is positive!
}

int to_int(char const *s)
{
	bool negate = (s[0] == '-');
	if ( *s == '+' || *s == '-' )
		++s;
	int result = 0;
	while(*s)
	{
		result = result * 10  - (*s - '0');  //assume negative number
		++s;
	}
	return negate ? result : -result; //-result is positive!
}

bool check_int(const std::string& str)
{
	int i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		i = 1;
		if (str[i] == '\0')
			return false;
	}
	for (unsigned long int j = i; j < str.size(); j++)
	{
		if (isdigit(str[j]) == 0)
			return false;
	}
	return true;
}

bool check_char(const std::string& str)
{
	if (str.size() == 3 && str[0] == '\'' && str[2] == '\'')
		return true;
	return false;
}

bool check_float(const std::string& str)
{
	int i = 0;
	int flag_dot = 0;
	int count_digit = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		i = 1;
		if (str[i] == '\0')
			return false;
	}
	for (unsigned long int j = i; j < str.size(); j++)
	{
		if (isdigit(str[j]) == 0)
		{
			if (str[j] == '.' && flag_dot == 0 && count_digit != 0)
			{
				flag_dot = 1;
				continue;
			}
			if (str[j] == 'f' && j == str.size() - 1)
				return true;
			else
				return false;
		}
		else
			count_digit++;
	}
	return false;
}

bool check_double(const std::string& str)
{
	int i = 0;
	int flag_dot = 0;
	int count_digit = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		i = 1;
		if (str[i] == '\0')
			return false;
	}
	for (unsigned long int j = i; j < str.size(); j++)
	{
		if (isdigit(str[j]) == 0)
		{
			if (str[j] == '.' && flag_dot == 0 && count_digit != 0)
			{
				flag_dot = 1;
				continue;
			}
			else
				return false;
		}
		else
			count_digit++;
	}
	return true;
}

void print_char(int val_i)
{
	char val_c;
	if (val_i >= 0 && val_i <= CHAR_MAX)
	{
		val_c = static_cast<char>(val_i);
		if (isprint(val_i))
			output(CHAR, val_c, false, true, false);
		else
			output(CHAR, N_DISPL, false, false, false);
	}
	else
		output(CHAR, IMP, false, false, false);
}

void print_floating_no_stand_cases(float val_f, double val_d)
{
	output(CHAR, IMP, false, false, false);
	output(INT, IMP, false, false, false);
	output(FLOAT, val_f, true, false, false);
	output(DOUBLE, val_d, false, false, false);
}

int main(int argc, char **argv)
{
	char val_c;
	int val_i;
	float val_f;
	double val_d;

	if (argc != 2)
	{
		std::cout << "Need 1 argument. ./convert <arg>" << std::endl;
		return 0;
	}
	std::string arg = std::string(argv[1]);
	if (arg == "nan" || arg == "+inf" || arg == "-inf" || arg == "inf")
	{
		val_d = std::strtod(argv[1], NULL);
		val_f = static_cast<float>(val_d);
		print_floating_no_stand_cases(val_f, val_d);
		return 0;
	}
	if (arg == "+inff" || arg == "-inff" || arg == "inff")
	{
		val_f = std::strtof(argv[1], NULL);
		val_d = static_cast<double>(val_f);
		print_floating_no_stand_cases(val_f, val_d);
		return 0;
	}
	//Char block
	if (check_char(argv[1]))
	{
		val_c = argv[1][1];
		val_i = static_cast<int>(val_c);
		val_f = static_cast<float >(val_c);
		val_d = static_cast<double >(val_c);
		if (isprint(val_i))
			output(CHAR, val_c, false, true, false);
		else
			output(CHAR, N_DISPL, false, false, false);
		output(INT, val_i, false, false, false);
		output(FLOAT, val_f, true, false, false);
		output(DOUBLE, val_d, false, false, false);
		return 0;
	}
	//Int block
	if (check_int(argv[1]))
	{
		long int tmp = to_long_int(argv[1]);
		if (tmp < INT_MIN || tmp > INT_MAX)
		{
			print_char(INT_MAX);
			output(INT, IMP, false, false, false);
			output(FLOAT, IMP, false, false, false);
			output(DOUBLE, IMP, false, false, false);
		}
		else
		{
			val_i = to_int(argv[1]);
			print_char(val_i);
			val_f = static_cast<float >(val_i);
			val_d = static_cast<double >(val_i);
			output(INT, val_i, false, false, false);
			output(FLOAT, val_f, true, false, true);
			output(DOUBLE, val_d, false, false, true);
		}
		return 0;
	}
	//Float block
	if (check_float(argv[1]))
	{
		val_f = std::atof(argv[1]);
		val_i = static_cast<int>(val_f);
		val_d = static_cast<double>(val_f);
		print_char(val_i);
		output(INT, val_i, false, false, false);
		if (val_f != (int)val_f)
		{
			output(FLOAT, val_f, true, false, false);
			output(DOUBLE, val_d, false, false, false);
		}
		else
		{
			output(FLOAT, val_f, true, false, true);
			output(DOUBLE, val_d, false, false, true);
		}
		return 0;
	}
	if (check_double(argv[1]))
	{
		val_d = std::atof(argv[1]);
		long int tmp = static_cast<long int>(val_d);
		val_i = static_cast<int>(val_d);
		val_f = static_cast<float>(val_d);
		if (tmp < INT_MIN || tmp > INT_MAX)
		{
			print_char(INT_MAX);
			output(INT, IMP, false, false, false);
		}
		else
		{
			print_char(val_i);
			output(INT, val_i, false, false, false);
		}
		if (val_f != (int)val_f)
		{
			output(FLOAT, val_f, true, false, false);
			output(DOUBLE, val_d, false, false, false);
		}
		else
		{
			output(FLOAT, val_f, true, false, true);
			output(DOUBLE, val_d, false, false, true);
		}
		return 0;
	}
	output(CHAR, IMP, false, false, false);
	output(INT, IMP, false, false, false);
	output(FLOAT, IMP, false, false, false);
	output(DOUBLE, IMP, false, false, false);
	return 0;
}
