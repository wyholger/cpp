//
// Created by Wynell Holger on 3/15/22.
//

#ifndef EX05_HARL_H
# define EX05_HARL_H
# define YELLOW "\033[1;33m"
# define PURPLE "\033[0;35m"
# define RED "\033[0;31m"
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
	void (Harl::*_func)(void);

public:
	Harl ();
	~Harl();
	void complain( std::string level );
};


#endif //EX05_HARL_H
