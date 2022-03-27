#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyForm", 137, 145), _target("null_target")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("ShrubberyForm", 137, 145), _target(target)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
		this->setTarget(other.getTarget());
	return *this;
}

void ShrubberyCreationForm::setTarget(const std::string &target)
{
	_target = target;
}

const std::string &ShrubberyCreationForm::getTarget() const
{
	return _target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
{
	this->setTarget(other.getTarget());
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	try
	{
		this->beExecuted(executor);
	}
	catch (std::exception& e)
	{
		throw;
	}
	std::ofstream file(this->getTarget() + "_shrubbery", std::ofstream::out);
	if (file.is_open())
	{
		file <<  "          &&& &&  & &&\n";
		file <<  "      && &\\/&\\|& ()|/ @, &&\n";
		file <<  "      &\\/(/&/&||/& /_/)_&/_&\n";
		file <<  "   &() &\\/&|()|/&\\/ '%\" & ()\n";
		file <<  "  &_\\_&&_\\ |& |&&/&__%_/_& &&\n";
		file <<  "&&   && & &| &| /& & % ()& /&&\n";
		file <<  " ()&_---()&\\&\\|&&-&&--%---()~\n";
		file <<  "     &&     \\|||\n";
		file <<  "             |||\n";
		file <<  "             |||\n";
		file <<  "             |||\n";
		file <<  "       , -=-~  .-^- _" << std::endl;
		file.close();
	}
	else
	{
		throw AForm::FileNotOpen();
	}
}

AForm *ShrubberyCreationForm::create(const std::string &target)
{
	return (new ShrubberyCreationForm(target));
}
