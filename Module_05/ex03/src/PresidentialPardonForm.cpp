#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PardonForm", 5, 25), _target("null_target")
{

}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("PardonForm", 5, 25), _target(target)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (this != &other)
		this->setTarget(other.getTarget());
	return *this;
}

void PresidentialPardonForm::setTarget(const std::string &target)
{
	_target = target;
}

const std::string &PresidentialPardonForm::getTarget() const
{
	return _target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
{
	this->setTarget(other.getTarget());
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	try
	{
		this->beExecuted(executor);
	}
	catch (std::exception& e)
	{
		throw;
	}
	std::cout << BLUE "Target ";
	std::cout << YELLOW << this->getTarget();
	std::cout << BLUE " has been pardoned by Zaphod Beeblebrox!" END << std::endl;
}

AForm *PresidentialPardonForm::create(const std::string &target)
{
	return (new PresidentialPardonForm(target));
}
