#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5, target)
{

}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & obj) : Form(obj)
{

}
PresidentialPardonForm::~PresidentialPardonForm()
{

}
PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & obj)
{
	Form::operator=(obj);
	return *this;
}
void PresidentialPardonForm::action() const
{
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox.\n";
}
