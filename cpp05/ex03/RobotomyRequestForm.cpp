#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45, target)
{

}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & obj) : Form(obj)
{

}
RobotomyRequestForm::~RobotomyRequestForm()
{

}
RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & obj)
{
	Form::operator=(obj);
	return *this;
}
void RobotomyRequestForm::action() const
{
	std::cout << "drrrrrrrr..r.r....rr.r.r.r.r.r..r.r.r.r.r..r.r.r.-r-r-s.r-mmmnmsmsms-s s-smsms-ms-ms-\n";
	if (rand() % 2)
		std::cout << this->getTarget() << " has been robotomized\n";
	else
		std::cout << this->getTarget() << " robotomize failed\n";
}
