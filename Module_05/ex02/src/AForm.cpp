#include "../include/AForm.hpp"


AForm::AForm() : _name(""), _execution_grade(150), _required_grade(150), _signing_status(false)
{

}

AForm::AForm(std::string name): _name(name), _execution_grade(150), _required_grade(150), _signing_status(false)
{

}

AForm::AForm(std::string name, int execution_grade, int required_grade): _name(name), _execution_grade(execution_grade), _required_grade(required_grade), _signing_status(false)
{
	if (execution_grade < 1 || required_grade < 1)
	{
		throw AForm::GradeTooHighException();
	}
	if (execution_grade > 150 || required_grade > 150)
	{
		throw AForm::GradeTooLowException();
	}
}

AForm::~AForm()
{

}

const std::string &AForm::getName() const
{
	return _name;
}

int AForm::getExecutionGrade() const
{
	return _execution_grade;
}

int AForm::getRequiredGrade() const
{
	return _required_grade;
}

bool AForm::isSigningStatus() const
{
	return _signing_status;
}

AForm &AForm::operator=(const AForm &other)
{
	if (this != &other)
		this->setSigningStatus(other.isSigningStatus());
	return *this;
}

void AForm::setSigningStatus(bool signingStatus)
{
	_signing_status = signingStatus;
}

AForm::AForm(const AForm &other) : _name(other.getName()), _execution_grade(other.getExecutionGrade()), _required_grade(other.getRequiredGrade()), _signing_status(other.isSigningStatus())
{

}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->getRequiredGrade() || this->isSigningStatus())
	{
		if (!this->isSigningStatus())
		{
			throw AForm::GradeTooLowException();
		}
		else
		{
			throw AForm::FormIsAlreadySigned();
		}
	}
	this->setSigningStatus(true);
}

bool AForm::beExecuted(const Bureaucrat &bureaucrat) const
{
	if (bureaucrat.getGrade() > this->getExecutionGrade() || !this->isSigningStatus())
	{
		if (!this->isSigningStatus())
		{
			throw AForm::FormIsNotSigned();
		}
		else
		{
			throw AForm::GradeTooLowException();
		}
	}
	std::cout << YELLOW << bureaucrat.getName() << END;
	std::cout << BLUE " executed " END;
	std::cout << YELLOW << this->getName() << END;
	std::cout << BLUE "." END << std::endl;
	return true;
}

std::ostream &operator << (std::ostream &os, const AForm &form)
{
	os << BLUE "AForm " END << YELLOW << form.getName() << END \
	BLUE ", required bureaucrat grade is " END \
	YELLOW << form.getRequiredGrade() << END \
	BLUE ", execution bureaucrat grade is " END \
	YELLOW << form.getExecutionGrade() << END;
	return os;
}