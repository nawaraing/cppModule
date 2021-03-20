#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern &in);
	Intern &operator=(const Intern &in);
	~Intern();
	Form* makeForm(std::string const &name, std::string const &type);
	class FormNotExist: public std::exception {
		virtual const char* what() const throw();
	};
};

struct Pair
{
    std::string name;
    Form* (*func)(std::string const &name);
};

#endif