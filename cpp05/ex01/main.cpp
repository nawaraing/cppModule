#include "Bureaucrat.hpp"
#include "Form.hpp"

#define CNT 3

int			main(void)
{
	try
	{
		Bureaucrat		obj1("first", 75);
		Bureaucrat		obj2("second", 75);
		for (int i = 0; i < CNT; i++)
		{
			obj1.decreaseGrade(20);
			std::cout << obj1;
		}
		for (int i = 0; i < CNT; i++)
		{
			obj2.increaseGrade(20);
			std::cout << obj2;
		}
		std::cout << "\n";
		Form		form1("form1", 100, 10);
		Form		form2("form2", 120, 10);
		obj1.signForm(form1);
		std::cout << form1;
		obj2.signForm(form1);
		std::cout << form1;
	}
	catch(std::exception & e)
	{
		std::cout << e.what();
	}
	return 0;
}