//
// Created by Wynell Holger on 3/15/22.
//

#ifndef EX06_HARL_HPP
# define EX06_HARL_HPP
# define YELLOW "\033[0;33m"
# define PURPLE "\033[0;35m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define END_COLOR "\033[0;0m"
# include <iostream>

class Harl {
private:
	std::string _level[4];
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	void indefinite( void );
public:
	Harl ();
	~Harl();
	void complain( std::string level );
};
#endif
