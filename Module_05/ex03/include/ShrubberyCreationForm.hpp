#ifndef EX03_SHRUBBERYCREATIONFORM_HPP
# define EX03_SHRUBBERYCREATIONFORM_HPP
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
	static AForm *create(std::string const & target);
private:
	std::string _target;
};

#endif
