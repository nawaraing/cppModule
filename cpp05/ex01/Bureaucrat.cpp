#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	this->name = name;
	this->grade = grade;
}
Bureaucrat::Bureaucrat(Bureaucrat const & obj)
{
	*this = obj;
}
Bureaucrat::~Bureaucrat()
{

}
Bureaucrat & Bureaucrat::operator=(Bureaucrat const & obj)
{
	this->name = obj.name;
	this->grade = obj.grade;
	return *this;
}
std::string Bureaucrat::getName() const
{
	return this->name;
}
int Bureaucrat::getGrade() const
{
	return this->grade;
}
void Bureaucrat::increaseGrade(int num)
{
	if (this->grade - num < 1)
		throw Bureaucrat::GradeTooLowException();
	this->grade -= num;
}
void Bureaucrat::decreaseGrade(int num)
{
	if (this->grade + num > 150)
		throw Bureaucrat::GradeTooHighException();
	this->grade += num;
}
void Bureaucrat::signForm(Form & target)
{
	try
	{
		target.beSigned(*this);
		std::cout << this->getName() << " signs " << target.getName() << "\n";
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " cannot sign " << target.getName() << " because ";
		std::cout << e.what();
	}
}
const char* Bureaucrat::GradeTooHighException::what() const throw() {return "Grade too high!!\n";}
const char* Bureaucrat::GradeTooLowException::what() const throw() {return "Grade too low!!\n";}
std::ostream & operator<<(std::ostream & out, Bureaucrat const & obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".\n";
	return out;
}
