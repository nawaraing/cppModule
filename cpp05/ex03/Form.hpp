#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <exception>

class Form
{
private:
	const std::string		name;
	const int				gradeForSign;
	const int				gradeForExcute;
	bool					sign;
	std::string				target;
public:
	Form(std::string name, int gfs, int gfe, std::string target);
	Form(Form const & obj);
	virtual ~Form();
	Form & operator=(Form const & obj);
	std::string getName() const;
	int getGradeForSign() const;
	int getGradeForExcute() const;
	bool getSign() const;
	std::string getTarget() const;
	virtual void beSigned(Bureaucrat const & target);
	virtual void execute(Bureaucrat const & executor) const;
	virtual void action() const = 0;
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};
std::ostream & operator<<(std::ostream & out, Form const & obj);


#endif