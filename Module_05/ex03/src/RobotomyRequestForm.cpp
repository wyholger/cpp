#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyForm", 45, 72), _target("null_target")
{

}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("RobotomyForm", 45, 72), _target(target)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other)
		this->setTarget(other.getTarget());
	return *this;
}

void RobotomyRequestForm::setTarget(const std::string &target)
{
	_target = target;
}

const std::string &RobotomyRequestForm::getTarget() const
{
	return _target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
{
	this->setTarget(other.getTarget());
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{

	try
	{
		this->beExecuted(executor);
	}
	catch (std::exception& e)
	{
		throw;
	}
	std::cout << BLUE "Drrrrrrrrr.... Trrrrrrr... Wjjjjjjjj..." END << std::endl;
	std::srand(time(NULL));
	if ((std::rand() % 2) == 0)
	{
		std::cout << BLUE "Target ";
		std::cout << YELLOW << this->getTarget();
		std::cout << BLUE " successfully robotomized." END << std::endl;
	}
	else
	{
		std::cout << BLUE "Target ";
		std::cout << YELLOW << this->getTarget();
		std::cout << BLUE " robotomy failed." END << std::endl;
	}
}

AForm *RobotomyRequestForm::create(const std::string &target)
{
	return (new RobotomyRequestForm(target));
}
