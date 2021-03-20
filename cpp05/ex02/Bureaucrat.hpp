#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Form;

class Bureaucrat
{
private:
	std::string		name;
	int				grade;
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const & obj);
	~Bureaucrat();
	Bureaucrat & operator=(Bureaucrat const & obj);
	std::string getName() const;
	int getGrade() const;
	void increaseGrade(int num);
	void decreaseGrade(int num);
	void signForm(Form & target);
	void executeForm(Form const & form);
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
std::ostream & operator<<(std::ostream & out, Bureaucrat const & obj);


#endif