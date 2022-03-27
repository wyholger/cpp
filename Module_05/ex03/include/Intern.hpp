#ifndef EX03_INTERN_HPP
# define EX03_INTERN_HPP
# include <iostream>
# include "AForm.hpp"

static const std::string names_forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

class Intern
{
public:
	Intern();
	Intern(const std::string& type_form ,const std::string& target);
	virtual ~Intern();

	Intern& operator = (const Intern &other);
	Intern(const Intern &other);

	void setTarget(const std::string &target);
	void setTypeForm(const std::string &typeForm);
	const std::string &getTarget() const;
	const std::string &getTypeForm() const;

	AForm* makeForm(const std::string& type_form ,const std::string& target);
	static AForm *create(std::string const & target);

	class WrongFormType : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Wrong form type";
		}
	};
private:
	std::string _type_form;
	std::string _target;
};

#endif
