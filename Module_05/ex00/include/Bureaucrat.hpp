#ifndef EX00_BUREAUCRAT_HPP
# define EX00_BUREAUCRAT_HPP
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
# include <iostream>
# include <exception>

class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(std::string name);
	Bureaucrat(std::string name, int grade);
	virtual ~Bureaucrat();


	const std::string &getName() const;
	int getGrade() const;
	void setGrade(int grade);
	Bureaucrat& operator = (const Bureaucrat &other);
	Bureaucrat(const Bureaucrat &other);

	void incrGrade(void);
	void decrGrade(void);

	class GradeTooHighException : std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Grade too high";
		}
	};

	class GradeTooLowException : std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Grade too low";
		}
	};

private:
	const std::string _name;
	int _grade;
};

std::ostream& operator << (std::ostream &os, const Bureaucrat& bureaucrat);

#endif
