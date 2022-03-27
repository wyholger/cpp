#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/Intern.hpp"

int main()
{
	std::cout << std::endl << PURPLE "______TESTING Intern______" END << std::endl;

	std::cout << std::endl << "___Testing Intern for-shrubbery-form___" << std::endl;
	{
		Intern someRandomIntern;
		AForm* rrf;

		try
		{
			rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
			Bureaucrat bob("Bob", 2);
			bob.signForm(*rrf);
			bob.executeForm(*rrf);
			delete rrf;
		}
		catch (std::exception &e)
		{
			std::cout << RED "Error : " << e.what() << END << std::endl;
		}
	}

	std::cout << std::endl << "___Testing Intern for-robo-form___" << std::endl;
	{
		Intern someRandomIntern;
		AForm* rrf;

		try
		{
			rrf = someRandomIntern.makeForm("robotomy request", "Bender");
			Bureaucrat bob("Bob", 2);
			bob.signForm(*rrf);
			bob.executeForm(*rrf);
			delete rrf;
		}
		catch (std::exception &e)
		{
			std::cout << RED "Error : " << e.what() << END << std::endl;
		}
	}
	std::cout << std::endl << "___Testing Intern for-presidential-form___" << std::endl;
	{
		Intern someRandomIntern;
		AForm* rrf;

		try
		{
			rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
			Bureaucrat bob("Bob", 2);
			bob.signForm(*rrf);
			bob.executeForm(*rrf);
			delete rrf;
		}
		catch (std::exception &e)
		{
			std::cout << RED "Error : " << e.what() << END << std::endl;
		}
	}
	std::cout << std::endl << "___Testing Intern for-unknown-form___" << std::endl;
	{
		Intern someRandomIntern;
		AForm* rrf;

		try
		{
			rrf = someRandomIntern.makeForm("unknown", "Bender");
			Bureaucrat bob("Bob", 2);
			bob.signForm(*rrf);
			bob.executeForm(*rrf);
			delete rrf;
		}
		catch (std::exception &e)
		{
			std::cout << RED "Error : " << e.what() << END << std::endl;
		}
	}

	return 0;
}
