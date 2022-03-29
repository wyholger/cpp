#ifndef EX00_CONVERT_HPP
# define EX00_CONVERT_HPP
# include <iostream>
# define IMP "impossible"
# define DOT_ZERO ".0"
# define N_DISPL "Non displayable"
# define CHAR "char: "
# define INT "int: "
# define FLOAT "float: "
# define DOUBLE "double: "
# define SUFF_F "f"
# define YELLOW "\033[0;33m"
# define PURPLE "\033[0;35m"
# define RED "\033[0;31m"
# define BLUE "\033[0;34m"
# define GREEN "\033[0;32m"
# define DARK_YELLOW "\033[2;33m"
# define DARK_PURPLE "\033[2;35m"
# define DARK_RED "\033[2;31m"
# define DARK_GREEN "\033[2;32m"
# define END "\033[0;0m"

void print_floating_no_stand_cases(float val_f, double val_d);
void print_char(int val_i);
bool check_double(const std::string& str);
bool check_float(const std::string& str);
bool check_char(const std::string& str);
bool check_int(const std::string& str);
int to_int(char const *s);
long int to_long_int(char const *s);
template<typename T>
void output(const std::string& str, T val, bool flag_f_suffix, bool char_quotes, bool dot_zero_flag);
#endif
