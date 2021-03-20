#include "Intern.hpp"

static Form     *createPresidentialPardonForm(std::string const &type) {return (new PresidentialPardonForm(type));};
static Form     *createRobotomyRequestForm(std::string const &type) {return (new RobotomyRequestForm(type));};
static Form     *createShrubberyCreationForm(std::string const &type) {return (new ShrubberyCreationForm(type));};

Intern::Intern()
{

}
Intern::Intern(const Intern &in)
{
	*this = in;
}
Intern &Intern::operator=(const Intern &in)
{
	if (this == &in)
		return *this;
	return *this;
}
Intern::~Intern()
{

}
const char* Intern::FormNotExist::what() const throw() {return ("Form is not correct name!\n");}
Form* Intern::makeForm(std::string const &name, std::string const &type)
{
    static struct Pair _pair[3] = {	{"presidential pardon", createPresidentialPardonForm}, 
    								{"robotomy request", createRobotomyRequestForm}, 
   									{"shrubbery creation", createShrubberyCreationForm}};

    for (int i = 0; i < 3; i++)
    {
        if (name == _pair[i].name)
        {
            std::cout << "Intern creates " << name << std::endl;
			return _pair[i].func(type);
        }
    }
    throw (Intern::FormNotExist());
    return (NULL);
}
