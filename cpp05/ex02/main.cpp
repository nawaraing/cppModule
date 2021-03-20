#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int			main(void)
{
	srand(time(0));

	Bureaucrat				man1("junkang1", 149);
	Bureaucrat				man2("junkang2", 130);
	Bureaucrat				man3("junkang3", 5);

	std::cout << "\n============== Shrubbery ===============\n";
	ShrubberyCreationForm	form1("newnew");
	man1.signForm(form1);
	std::cout << form1;
	man1.executeForm(form1);
	std::cout << "\n";
	man2.signForm(form1);
	std::cout << form1;
	man2.executeForm(form1);
	std::cout << "\n";
	man3.signForm(form1);
	std::cout << form1;
	man3.executeForm(form1);

	std::cout << "\n============== Roboto ===============\n";
	RobotomyRequestForm		form2("oldold");
	man1.signForm(form2);
	std::cout << form2;
	man1.executeForm(form2);
	std::cout << "\n";
	man2.signForm(form2);
	std::cout << form2;
	man2.executeForm(form2);
	std::cout << "\n";
	man3.signForm(form2);
	std::cout << form2;
	man3.executeForm(form2);

	std::cout << "\n============== Presidential ===============\n";
	PresidentialPardonForm		form3("cake");
	man1.signForm(form3);
	std::cout << form3;
	man1.executeForm(form3);
	std::cout << "\n";
	man2.signForm(form3);
	std::cout << form3;
	man2.executeForm(form3);
	std::cout << "\n";
	man3.signForm(form3);
	std::cout << form3;
	man3.executeForm(form3);

	return 0;
}