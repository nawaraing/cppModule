#include "Form.hpp"

Form::Form(std::string name, int gfs, int gfe, std::string target) : name(name), gradeForSign(gfs), gradeForExcute(gfe), target(target)
{
	if (gfs < 1 || gfe < 1)
		throw Form::GradeTooHighException();
	if (gfs > 150 || gfe > 150)
		throw Form::GradeTooLowException();
	sign = false;
}
Form::Form(Form const & obj) : name(obj.getName()), gradeForSign(obj.getGradeForSign()), gradeForExcute(obj.getGradeForExcute()), target(obj.getTarget())
{
	sign = obj.getSign();
}
Form::~Form()
{

}
Form & Form::operator=(Form const & obj)
{
	this->sign = obj.getSign();
	this->target = obj.getTarget();
	return *this;
}
std::string Form::getName() const
{
	return this->name;
}
int Form::getGradeForSign() const
{
	return this->gradeForSign;
}
int Form::getGradeForExcute() const
{
	return this->gradeForExcute;
}
bool Form::getSign() const
{
	return this->sign;
}
std::string Form::getTarget() const
{
	return this->target;
}
void Form::beSigned(Bureaucrat const & target)
{
	if (target.getGrade() > this->getGradeForSign())
		throw Form::GradeTooLowException();
	this->sign = true;
}
void Form::execute(Bureaucrat const & executor) const
{
	if (!this->getSign() || this->getGradeForExcute() < executor.getGrade())
		throw Form::GradeTooLowException();
	this->action();
}
const char* Form::GradeTooLowException::what() const throw() {return "Grade too low!!\n";}
const char* Form::GradeTooHighException::what() const throw() {return "Grade too high!!\n";}
std::ostream & operator<<(std::ostream & out, Form const & obj)
{
	out << obj.getName() << " >> sign: " << obj.getSign() << ", gradeForSign: " << obj.getGradeForSign() << ", gradeForExecute: " << obj.getGradeForExcute() << ".\n";
	return out;
}
