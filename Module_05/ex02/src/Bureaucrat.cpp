#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

std::ostream &operator << (std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << YELLOW << bureaucrat.getName() << BLUE ", bureaucrat grade " YELLOW << bureaucrat.getGrade() << BLUE ".";
	return os;
}

Bureaucrat::Bureaucrat() : _name(""), _grade(150)
{

}

Bureaucrat::~Bureaucrat()
{

}

const std::string &Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::setGrade(int grade)
{
	_grade = grade;
}

Bureaucrat::Bureaucrat(std::string name) : _name(name)
{

}

void Bureaucrat::incrGrade()
{
	if (this->getGrade() - 1 < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	this->setGrade(this->getGrade() - 1);
}

void Bureaucrat::decrGrade(void)
{
	if (this->getGrade() + 1 > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	this->setGrade(this->getGrade() + 1);
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
		this->setGrade(other.getGrade());
	return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	this->setGrade(other.getGrade());
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{

	if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else
	{
		this->setGrade(grade);
	}
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << YELLOW << this->getName() << END;
		std::cout << BLUE " signed " END;
		std::cout << YELLOW << form.getName() << END;
		std::cout << BLUE "." END << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << YELLOW << this->getName() << END;
		std::cout << RED " couldn’t sign " END;
		std::cout << YELLOW << form.getName() << END;
		std::cout << RED " because ";
		if (form.isSigningStatus())
		{
			std::cout << "the form is already signed." END << std::endl;
			throw Bureaucrat::FormIsAlreadySigned();
		}
		else
		{
			std::cout << "the bureaucrat has a small grade to sign this form." END << std::endl;
			throw Bureaucrat::GradeTooLowException();
		}
	}
}

