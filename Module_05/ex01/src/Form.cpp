#include "../include/Form.hpp"


Form::Form() : _name(""), _execution_grade(150), _required_grade(150), _signing_status(false)
{

}

Form::Form(std::string name): _name(name), _execution_grade(150), _required_grade(150), _signing_status(false)
{

}

Form::Form(std::string name, int execution_grade, int required_grade): _name(name), _execution_grade(execution_grade), _required_grade(required_grade), _signing_status(false)
{
	if (execution_grade < 1 || required_grade < 1)
	{
		throw Form::GradeTooHighException();
	}
	if (execution_grade > 150 || required_grade > 150)
	{
		throw Form::GradeTooLowException();
	}
}

Form::~Form()
{

}

const std::string &Form::getName() const
{
	return _name;
}

int Form::getExecutionGrade() const
{
	return _execution_grade;
}

int Form::getRequiredGrade() const
{
	return _required_grade;
}

bool Form::isSigningStatus() const
{
	return _signing_status;
}

Form &Form::operator=(const Form &other)
{
	if (this != &other)
		this->setSigningStatus(other.isSigningStatus());
	return *this;
}

void Form::setSigningStatus(bool signingStatus)
{
	_signing_status = signingStatus;
}

Form::Form(const Form &other) : _name(other.getName()), _execution_grade(other.getExecutionGrade()), _required_grade(other.getRequiredGrade()), _signing_status(other.isSigningStatus())
{

}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->getRequiredGrade() || this->isSigningStatus())
	{
		if (!this->isSigningStatus())
		{
			throw Form::GradeTooLowException();
		}
		else
		{
			throw Form::FormIsAlreadySigned();
		}
	}
	this->setSigningStatus(true);
}

//void Form::signForm(bool can_sign, Bureaucrat &bureaucrat) const
//{
//	if (!can_sign)
//	{
//		std::cout << YELLOW << bureaucrat.getName() << END;
//		std::cout << RED " couldn’t sign " END;
//		std::cout << YELLOW << this->getName() << END;
//		std::cout << RED " because " END;
//		if (this->isSigningStatus())
//		{
//			std::cout << YELLOW "the form is already signed." END << std::endl;
//		}
//		else
//		{
//			std::cout << YELLOW "the bureaucrat has a small grade to sign this form." END << std::endl;
//		}
//	}
//	else
//	{
//		std::cout << YELLOW << bureaucrat.getName() << END;
//		std::cout << BLUE " signed " END;
//		std::cout << YELLOW << this->getName() << END;
//		std::cout << BLUE "." END << std::endl;
//	}
//}


std::ostream &operator << (std::ostream &os, const Form &form)
{
	os << BLUE "Form " END << YELLOW << form.getName() << END \
	BLUE ", required bureaucrat grade is " END \
	YELLOW << form.getRequiredGrade() << END \
	BLUE ", execution bureaucrat grade is " END \
	YELLOW << form.getExecutionGrade() << END;
	return os;
}