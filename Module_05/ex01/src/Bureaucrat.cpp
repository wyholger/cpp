#include "../include/Bureaucrat.hpp"

std::ostream &operator << (std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
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
		throw Bureaucrat::GradeTooHighException_1();
	}
	this->setGrade(this->getGrade() - 1);
}

void Bureaucrat::decrGrade(void)
{
	if (this->getGrade() + 1 > 150)
	{
		throw Bureaucrat::GradeTooLowException_1();
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
		throw Bureaucrat::GradeTooHighException_1();
	}
	else if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException_1();
	}
	else
	{
		this->setGrade(grade);
	}
}
