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
public:
	Form(std::string name, int gfs, int gfe);
	Form(Form const & obj);
	virtual ~Form();
	Form & operator=(Form const & obj);
	std::string getName() const;
	int getGradeForSign() const;
	int getGradeForExcute() const;
	bool getSign() const;
	virtual void beSigned(Bureaucrat const & target);
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