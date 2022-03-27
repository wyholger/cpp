#ifndef EX02_SHRUBBERYCREATIONFORM_HPP
# define EX02_SHRUBBERYCREATIONFORM_HPP
# include <fstream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string& target);
	virtual ~ShrubberyCreationForm();

	ShrubberyCreationForm& operator = (const ShrubberyCreationForm &other);
	ShrubberyCreationForm(const ShrubberyCreationForm &other);

	const std::string &getTarget() const;
	void setTarget(const std::string &target);

	void execute(Bureaucrat const & executor) const;

private:
	std::string _target;
};

#endif
