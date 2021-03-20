#include "Bureaucrat.hpp"

int			main(void)
{
	Bureaucrat		obj1("first", 75);
	Bureaucrat		obj2("second", 75);
	
	while (1)
	{
		try {
			obj1.decreaseGrade(20);
			std::cout << obj1;
		}
		catch (std::exception & e) {
			std::cout << e.what();
			break ;
		}
	}
	while (1)
	{
		try {
			obj2.increaseGrade(20);
			std::cout << obj2;
		}
		catch (std::exception & e) {
			std::cout << e.what();
			break ;
		}
	}
	return 0;
}