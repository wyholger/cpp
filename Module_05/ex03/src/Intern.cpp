#include "../include/Intern.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

Intern::Intern() : _type_form(""), _target("")
{

}

Intern::Intern(const std::string &type_form, const std::string &target) : _type_form(type_form), _target(target)
{

}

Intern::~Intern()
{

}

void Intern::setTypeForm(const std::string &typeForm)
{
	_type_form = typeForm;
}


const std::string &Intern::getTypeForm() const
{
	return _type_form;
}

const std::string &Intern::getTarget() const
{
	return _target;
}

void Intern::setTarget(const std::string &target)
{
	_target = target;
}

Intern &Intern::operator=(const Intern &other)
{
	if (this != &other)
	{
		this->setTarget(other.getTarget());
		this->setTypeForm(other.getTypeForm());
	}
	return *this;
}

Intern::Intern(const Intern &other)
{
	this->setTarget(other.getTarget());
	this->setTypeForm(other.getTypeForm());
}

AForm *Intern::makeForm(const std::string &type_form, const std::string &target)
{
	AForm *(*func[4]) (const std::string &target) = {
			&ShrubberyCreationForm::create,
			&RobotomyRequestForm::create,
			&PresidentialPardonForm::create,
			&Intern::create
			};
	for (int i = 0; i < 3; i++)
	{
		if (type_form == names_forms[i])
		{
			std::cout << BLUE "Intern creates " YELLOW << names_forms[i] << BLUE " form." END << std::endl;
			return func[i] (target);
		}
	}
	return func[3] (target);
}

AForm *Intern::create(const std::string &target)
{
	(void)target;
	throw Intern::WrongFormType();
	return nullptr;
}
