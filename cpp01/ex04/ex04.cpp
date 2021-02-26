#include <iostream>
#include <string>

int			main(void)
{
	std::string	str = "HI THIS IS BRAIN";

	std::string	*ptr = &str;
	std::string	&ref = str;

	std::cout << "str: " << str << "\n" <<
	"*ptr: " << *ptr << "\n" <<
	"ptr: " << ptr << "\n" <<
	"&ref: " << &ref << "\n" <<
	"ref: " << ref << "\n";
}