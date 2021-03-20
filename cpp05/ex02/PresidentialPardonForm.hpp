#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const & obj);
	~PresidentialPardonForm();
	PresidentialPardonForm & operator=(PresidentialPardonForm const & obj);
	void action() const;
};

#endif