#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

int main()
{
	std::cout << std::endl << PURPLE "______TESTING ShrubberyCreationForm______" END << std::endl;

	std::cout << std::endl << "___Testing ShrubberyCreationForm if bureaucrat with too low grade___" << std::endl;
	{
		try
		{
			ShrubberyCreationForm form_s("target");
			Bureaucrat bob("Bob", 10);
			Bureaucrat john("John", 150);
			bob.signForm(form_s);
			john.executeForm(form_s);
		}
		catch (std::exception &e)
		{
			std::cout << RED "Error : " << e.what() << END << std::endl;
		}
	}

	std::cout << std::endl << "___Testing ShrubberyCreationForm if form in not signed___" << std::endl;
	{
		try
		{
			ShrubberyCreationForm form_s("target");
			Bureaucrat john("John", 150);
			john.executeForm(form_s);
		}
		catch (std::exception &e)
		{
			std::cout << RED "Error : " << e.what() << END << std::endl;
		}
	}

	std::cout << std::endl << "___Testing ShrubberyCreationForm if bureaucrat grade exec is low for exec form___" << std::endl;
	{
		try
		{
			ShrubberyCreationForm form_s("target");
			Bureaucrat bob("Bob", 10);
			Bureaucrat john("John", 150);
			bob.signForm(form_s);
			john.executeForm(form_s);
		}
		catch (std::exception &e)
		{
			std::cout << RED "Error : " << e.what() << END << std::endl;
		}
	}

	std::cout << std::endl << "___Testing ShrubberyCreationForm if everything is fine___" << std::endl;
	{
		try
		{
			ShrubberyCreationForm form_s("target");
			Bureaucrat bob("Bob", 10);
			Bureaucrat john("John", 10);
			bob.signForm(form_s);
			john.executeForm(form_s);
		}
		catch (std::exception &e)
		{
			std::cerr << RED "Error : " << e.what() << END << std::endl;
		}
	}





	std::cout << std::endl << PURPLE "______TESTING RobotomyRequestForm______" END << std::endl;

	std::cout << std::endl << "___Testing RobotomyRequestForm if bureaucrat with too low grade___" << std::endl;
	{
		try
		{
			RobotomyRequestForm form_s("target");
			Bureaucrat bob("Bob", 10);
			Bureaucrat john("John", 150);
			bob.signForm(form_s);
			john.executeForm(form_s);
		}
		catch (std::exception &e)
		{
			std::cout << RED "Error : " << e.what() << END << std::endl;
		}
	}

	std::cout << std::endl << "___Testing RobotomyRequestForm if form in not signed___" << std::endl;
	{
		try
		{
			RobotomyRequestForm form_s("target");
			Bureaucrat john("John", 150);
			john.executeForm(form_s);
		}
		catch (std::exception &e)
		{
			std::cout << RED "Error : " << e.what() << END << std::endl;
		}
	}

	std::cout << std::endl << "___Testing RobotomyRequestForm if bureaucrat grade exec is low for exec form___" << std::endl;
	{
		try
		{
			RobotomyRequestForm form_s("target");
			Bureaucrat bob("Bob", 10);
			Bureaucrat john("John", 150);
			bob.signForm(form_s);
			john.executeForm(form_s);
		}
		catch (std::exception &e)
		{
			std::cout << RED "Error : " << e.what() << END << std::endl;
		}
	}

	std::cout << std::endl << "___Testing RobotomyRequestForm if everything is fine___" << std::endl;
	{
		try
		{
			RobotomyRequestForm form_s("fixik");
			Bureaucrat bob("Bob", 10);
			Bureaucrat john("John", 10);
			bob.signForm(form_s);
			john.executeForm(form_s);
		}
		catch (std::exception &e)
		{
			std::cerr << RED "Error : " << e.what() << END << std::endl;
		}
	}





	std::cout << std::endl << PURPLE "______TESTING PresidentialPardonForm______" END << std::endl;

	std::cout << std::endl << "___Testing PresidentialPardonForm if bureaucrat with too low grade___" << std::endl;
	{
		try
		{
			PresidentialPardonForm form_s("target");
			Bureaucrat bob("Bob", 4);
			Bureaucrat john("John", 150);
			bob.signForm(form_s);
			john.executeForm(form_s);
		}
		catch (std::exception &e)
		{
			std::cout << RED "Error : " << e.what() << END << std::endl;
		}
	}

	std::cout << std::endl << "___Testing PresidentialPardonForm if form in not signed___" << std::endl;
	{
		try
		{
			PresidentialPardonForm form_s("target");
			Bureaucrat john("John", 150);
			john.executeForm(form_s);
		}
		catch (std::exception &e)
		{
			std::cout << RED "Error : " << e.what() << END << std::endl;
		}
	}

	std::cout << std::endl << "___Testing PresidentialPardonForm if bureaucrat grade exec is low for exec form___" << std::endl;
	{
		try
		{
			PresidentialPardonForm form_s("target");
			Bureaucrat bob("Bob", 4);
			Bureaucrat john("John", 150);
			bob.signForm(form_s);
			john.executeForm(form_s);
		}
		catch (std::exception &e)
		{
			std::cout << RED "Error : " << e.what() << END << std::endl;
		}
	}

	std::cout << std::endl << "___Testing PresidentialPardonForm if everything is fine___" << std::endl;
	{
		try
		{
			PresidentialPardonForm form_s("Chewbacca");
			Bureaucrat bob("Bob", 4);
			Bureaucrat john("John", 4);
			bob.signForm(form_s);
			john.executeForm(form_s);
		}
		catch (std::exception &e)
		{
			std::cerr << RED "Error : " << e.what() << END << std::endl;
		}
	}
	return 0;
}
