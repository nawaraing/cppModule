#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137, target)
{

}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & obj) : Form(obj)
{

}
ShrubberyCreationForm::~ShrubberyCreationForm()
{

}
ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & obj)
{
	Form::operator=(obj);
	return *this;
}
void ShrubberyCreationForm::action() const
{
	std::ofstream	file;

    file.open((getTarget() + "_shrubbery").c_str(), std::ios::trunc);
	if (!file.is_open())
	{
		std::cerr << "Can't create a file\n";
		return ;
	}
	file << "             **              \n";
	file << "            <  >             \n";
	file << "             **              \n";
	file << "             **              \n";
	file << "            *  *             \n";
	file << "           *++++*            \n";
	file << "          *  ()  *           \n";
	file << "          *      *           \n";
	file << "         *~`~`~`~`*          \n";
	file << "        *  ()  ()  *         \n";
	file << "        *          *         \n";
	file << "       **&*&*&*&*&*&*        \n";
	file << "      *  ()  ()  ()  *       \n";
	file << "      *              *       \n";
	file << "     *++++++++++++++++*      \n";
	file << "    *  ()  ()  ()  ()  *     \n";
	file << "    *                  *     \n";
	file << "   *~`~`~`~`~`~`~`~`~`~`*    \n";
	file << "  *  ()  ()  ()  ()  ()  *   \n";
	file << "  **&*&*&*&*&*&*&*&*&*&*&*   \n";
	file << " *                        *  \n";
	file << "*,.,.,.,.,.,.,.,.,.,.,.,.,.* \n";
	file << "           |   |             \n";
	file << "          |`````|            \n";
	file << "          *_____*            \n";
	file.close();
}
