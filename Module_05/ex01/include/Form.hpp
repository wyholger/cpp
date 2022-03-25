#ifndef EX01_FORM_HPP
# define EX01_FORM_HPP
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
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
	Form();
	Form(std::string name);
	Form(std::string name, int execution_grade, int required_grade);
	virtual ~Form();

	Form& operator = (const Form &other);
	Form(const Form &other);

	const std::string &getName() const;
	const int getExecutionGrade() const;
	const int getRequiredGrade() const;
	bool isSigningStatus() const;
	void setSigningStatus(bool signingStatus);

	void beSigned(Bureaucrat &bureaucrat);

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
	const int _execution_grade;
	const int _required_grade;
	bool _signing_status;
    Bureaucrat _br;
};

std::ostream& operator << (std::ostream &os, const Form& bureaucrat);


#endif //EX01_FORM_HPP
