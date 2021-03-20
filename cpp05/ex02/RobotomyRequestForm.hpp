#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <cstdlib>

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const & obj);
	~RobotomyRequestForm();
	RobotomyRequestForm & operator=(RobotomyRequestForm const & obj);
	void action() const;
};

#endif