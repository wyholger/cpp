#ifndef EX02_AFORM_HPP
# define EX02_AFORM_HPP
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

class AForm
{
public:
	AForm();
	AForm(std::string name);
	AForm(std::string name, int execution_grade, int required_grade);
	virtual ~AForm();

	AForm& operator = (const AForm &other);
	AForm(const AForm &other);

	const std::string &getName() const;
	int getExecutionGrade() const;
	int getRequiredGrade() const;
	bool isSigningStatus() const;
	void setSigningStatus(bool signingStatus);

	void beSigned(Bureaucrat &bureaucrat);
	bool beExecuted(const Bureaucrat &bureaucrat) const;
	virtual void execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Grade too high";
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Grade too low";
		}
	};

	class FormIsAlreadySigned : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Attempt to sign a form that is already signed";
		}
	};

	class FormIsNotSigned : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Attempt to execute an unsigned form";
		}
	};

	class FileNotOpen : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Failed to open file";
		}
	};

private:
	const std::string _name;
	const int _execution_grade;
	const int _required_grade;
	bool _signing_status;
};

std::ostream& operator << (std::ostream &os, const AForm& bureaucrat);


#endif //EX01_FORM_HPP
