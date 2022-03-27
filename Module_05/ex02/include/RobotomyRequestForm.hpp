#ifndef EX02_ROBOTOMYREQUESTFORM_HPP
# define EX02_ROBOTOMYREQUESTFORM_HPP
# include <ctime>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string& target);
	virtual ~RobotomyRequestForm();

	RobotomyRequestForm& operator = (const RobotomyRequestForm &other);
	RobotomyRequestForm(const RobotomyRequestForm &other);

	const std::string &getTarget() const;
	void setTarget(const std::string &target);

	void execute(Bureaucrat const & executor) const;

private:
	std::string _target;
};


#endif
