#ifndef EX03_PRESIDENTIALPARDONFORM_HPP
# define EX03_PRESIDENTIALPARDONFORM_HPP
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string& target);
	virtual ~PresidentialPardonForm();

	PresidentialPardonForm& operator = (const PresidentialPardonForm &other);
	PresidentialPardonForm(const PresidentialPardonForm &other);

	const std::string &getTarget() const;
	void setTarget(const std::string &target);

	void execute(Bureaucrat const & executor) const;
	static AForm *create(std::string const & target);
private:
	std::string _target;
};


#endif
