#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

int main()
{
	Form a("fox", 10, 20);
	std::cout << a << std::endl;
	Bureaucrat b ("Bob", 15);
	std::cout << b;
//	{
//		std::cout << YELLOW "___Test normal___" END << std::endl;
//		try
//		{
//			Bureaucrat	robert;
//			Bureaucrat	bob("Bob", 75);
//			Bureaucrat	james("James", 1);
//			Bureaucrat	henry("Henry", 150);
//			std::cout << "Everything is a-OK !" << std::endl;
//		}
//		catch (Bureaucrat::GradeTooHighException_1& e)
//		{
//			std::cout << RED "Error : " << e.what() << END << std::endl;
//		}
//		catch (Bureaucrat::GradeTooLowException_1& e)
//		{
//			std::cout << RED "Error : " << e.what() << END << std::endl;
//		}
//	}
//
//	// Grade too high in constructor
//	{
//		std::cout << YELLOW "___Test too high in constructor___" END << std::endl;
//		try
//		{
//			Bureaucrat	trevor("Trevor", 0);
//			std::cout << "You should not see this" << std::endl;
//		}
//		catch (Bureaucrat::GradeTooHighException_1& e) {
//			std::cout << RED "Error : " << e.what() << END << std::endl;
//		}
//		catch (Bureaucrat::GradeTooLowException_1& e)
//		{
//			std::cout << RED "Error : " << e.what() << END << std::endl;
//		}
//	}
//
//	// Grade too low in constructor
//	{
//		std::cout << YELLOW "___Test too low in constructor___" END << std::endl;
//		try
//		{
//			Bureaucrat	trevor("Trevor", 151);
//			std::cout << "You should not see this" << std::endl;
//		}
//		catch (Bureaucrat::GradeTooHighException_1& e)
//		{
//			std::cout << RED "Error : " << e.what() << END << std::endl;
//		}
//		catch (Bureaucrat::GradeTooLowException_1& e)
//		{
//			std::cout << RED "Error : " << e.what() << END << std::endl;
//		}
//	}
//
//	// Grade too high after increment
//	{
//		std::cout << YELLOW "___Test too high after increment___" END << std::endl;
//		try
//		{
//			Bureaucrat	trevor("Trevor", 1);
//			std::cout << trevor;
//			trevor.incrGrade();
//		}
//		catch (Bureaucrat::GradeTooHighException_1& e)
//		{
//			std::cout << RED "Error : " << e.what() << END << std::endl;
//		}
//		catch (Bureaucrat::GradeTooLowException_1& e)
//		{
//			std::cout << RED "Error : " << e.what() << END << std::endl;
//		}
//	}
//
//	// Grade too low after decrement
//	{
//		std::cout << YELLOW "___Test too low after decrement___" END << std::endl;
//		try
//		{
//			Bureaucrat	trevor("Trevor", 150);
//			std::cout << trevor;
//			trevor.decrGrade();
//		}
//		catch (Bureaucrat::GradeTooHighException_1& e)
//		{
//			std::cout << RED "Error : " << e.what() << END << std::endl;
//		}
//		catch (Bureaucrat::GradeTooLowException_1& e)
//		{
//			std::cout << RED "Error : " << e.what() << END << std::endl;
//		}
//	}
	return 0;
}
