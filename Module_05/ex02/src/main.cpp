#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

int main()
{
	// Form with too high grade
	std::cout << std::endl << "___Testing if form with too high grade___" << std::endl;
	{
		try
		{
			Form holidayForm("Holiday Form", 0, 50);
			std::cout << "You should not see this" << std::endl;
		}
		catch(std::exception& e) {
			std::cerr << RED "Error : " << e.what() << END << std::endl;
		}
	}

	// Form with too low grade
	std::cout << std::endl << "___Testing if form with too low grade___" << std::endl;
	{
		try
		{
			Form holidayForm("Holiday Form", 50, 151);
			std::cout << "You should not see this" << std::endl;
		}
		catch(std::exception& e) {
			std::cerr << RED "Error : " << e.what() << END << std::endl;
		}
	}

	// Bureaucrat has too low grade to sign form
	std::cout << std::endl << "___Testing if bureaucrat has too low grade to sign form___" << std::endl;
	{
		try
		{
			Bureaucrat	bob("Bob", 150);
			Form		form("Regular Form", 50, 50);

			bob.signForm(form);
		}
		catch(std::exception& e) {
			std::cerr << RED "Error : " << e.what() << END << std::endl;
		}
	}

	// Everything is fine
	std::cout << std::endl << "___Testing if the form is already signed___" << std::endl;
	{
		try
		{
			Bureaucrat	john("John", 1);
			Bureaucrat	mark("Mark", 1);
			Form		form("Regular Form", 50, 50);
			john.signForm(form);
			mark.signForm(form);
		}
		catch(std::exception& e) {
			std::cerr << RED "Error : " << e.what() << END << std::endl;
		}
	}

	//
	std::cout << std::endl << "___Testing if everything is fine___" << std::endl;
	{
		try
		{
			Bureaucrat	bob("Karl", 1);
			Form		form("Regular Form", 50, 50);

			bob.signForm(form);
			std::cout << GREEN "Everything is a-OK!" END << std::endl;
		}
		catch(std::exception& e) {
			std::cerr << RED "Error : " << e.what() << END << std::endl;
		}
	}
	return 0;
}
