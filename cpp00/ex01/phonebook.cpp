#include "phonebook.hpp"

void			Phonebook::setFirstName(std::string arg)
{
	this->first_name = arg;
}

void			Phonebook::setLastName(std::string arg)
{
	this->last_name = arg;
}

void			Phonebook::setNickname(std::string arg)
{
	this->nickname = arg;
}

void			Phonebook::setLogin(std::string arg)
{
	this->login = arg;
}

void			Phonebook::setPostalAddress(std::string arg)
{
	this->postal_address = arg;
}

void			Phonebook::setEmailAddress(std::string arg)
{
	this->email_address = arg;
}

void			Phonebook::setPhoneNumber(std::string arg)
{
	this->phone_number = arg;
}

void			Phonebook::setBirthdayDate(std::string arg)
{
	this->birthday_date = arg;
}

void			Phonebook::setFavoriteMeal(std::string arg)
{
	this->favorite_meal = arg;
}

void			Phonebook::setUnderwearColor(std::string arg)
{
	this->underwear_color = arg;
}

void			Phonebook::setDarkestSecret(std::string arg)
{
	this->darkest_secret = arg;
}

std::string		Phonebook::getFirstName(void)
{
	return this->first_name;
}

std::string		Phonebook::getLastName(void)
{
	return this->last_name;
}

std::string		Phonebook::getNickname(void)
{
	return this->nickname;
}

std::string		Phonebook::getLogin(void)
{
	return this->login;
}

std::string		Phonebook::getPostalAddress(void)
{
	return this->postal_address;
}

std::string		Phonebook::getEmailAddress(void)
{
	return this->email_address;
}

std::string		Phonebook::getPhoneNumber(void)
{
	return this->phone_number;
}

std::string		Phonebook::getBirthdayDate(void)
{
	return this->birthday_date;
}

std::string		Phonebook::getFavoriteMeal(void)
{
	return this->favorite_meal;
}

std::string		Phonebook::getUnderwearColor(void)
{
	return this->underwear_color;
}

std::string		Phonebook::getDarkestSecret(void)
{
	return this->darkest_secret;
}

void			commandAdd(Phonebook *book)
{
	std::string		line;

	std::cout << "input first name : ";
	std::getline(std::cin, line);
	book->setFirstName(line);
	std::cout << "input last name : ";
	std::getline(std::cin, line);
	book->setLastName(line);
	std::cout << "input Nickname : ";
	std::getline(std::cin, line);
	book->setNickname(line);
	std::cout << "input login : ";
	std::getline(std::cin, line);
	book->setLogin(line);
	std::cout << "input postal address : ";
	std::getline(std::cin, line);
	book->setPostalAddress(line);
	std::cout << "input email address : ";
	std::getline(std::cin, line);
	book->setEmailAddress(line);
	std::cout << "input phone number : ";
	std::getline(std::cin, line);
	book->setPhoneNumber(line);
	std::cout << "input birth day : ";
	std::getline(std::cin, line);
	book->setBirthdayDate(line);
	std::cout << "input favorite meal : ";
	std::getline(std::cin, line);
	book->setFavoriteMeal(line);
	std::cout << "input underwear color : ";
	std::getline(std::cin, line);
	book->setUnderwearColor(line);
	std::cout << "input darkest secret : ";
	std::getline(std::cin, line);
	book->setDarkestSecret(line);
}

void		printHead(void)
{
	for (int i = 0; i < 45; i++)
		std::cout << '-';
	std::cout << "\n";
	std::cout << "|   index  |first name| last name| nickname |\n";
	for (int i = 0; i < 45; i++)
		std::cout << '-';
	std::cout << "\n";
}

void		printBook(Phonebook book, int idx)
{
	std::string		tmp;

	std::cout << "|";
	std::cout << std::setw(10) << std::right;
	std::cout << idx + 1;
	std::cout << "|";
	tmp = book.getFirstName();
	if (tmp.length() > 10)
	{
		tmp.resize(10);
		tmp[9] = '.';
	}
	std::cout << std::setw(10) << std::right;
	std::cout << tmp;
	std::cout << "|";
	tmp = book.getLastName();
	if (tmp.length() > 10)
	{
		tmp.resize(10);
		tmp[9] = '.';
	}
	std::cout << std::setw(10) << std::right;
	std::cout << tmp;
	std::cout << "|";
	tmp = book.getNickname();
	if (tmp.length() > 10)
	{
		tmp.resize(10);
		tmp[9] = '.';
	}
	std::cout << std::setw(10) << std::right;
	std::cout << tmp;
	std::cout << "|";
	std::cout << "\n";
}

void		printTail(void)
{
	for (int i = 0; i < 45; i++)
		std::cout << '-';
	std::cout << "\n";
}

void		getAndPrintEntry(Phonebook book[], int idx)
{
	std::string		line;
	Phonebook		tmp;

	std::cout << "Entry Index : ";
	std::getline(std::cin, line);
	if (line == "1" && idx >= 1)
		tmp = book[0];
	else if (line == "2" && idx >= 2)
		tmp = book[1];
	else if (line == "3" && idx >= 3)
		tmp = book[2];
	else if (line == "4" && idx >= 4)
		tmp = book[3];
	else if (line == "5" && idx >= 5)
		tmp = book[4];
	else if (line == "6" && idx >= 6)
		tmp = book[5];
	else if (line == "7" && idx >= 7)
		tmp = book[6];
	else if (line == "8" && idx >= 8)
		tmp = book[7];
	else
	{
		std::cout << "Wrong entry\n";
		return ;
	}
	std::cout << "first name : " << tmp.getFirstName() << "\n";
	std::cout << "last name : " << tmp.getLastName() << "\n";
	std::cout << "nickname : " << tmp.getNickname() << "\n";
	std::cout << "login : " << tmp.getLogin() << "\n";
	std::cout << "postal address : " << tmp.getPostalAddress() << "\n";
	std::cout << "email address : " << tmp.getEmailAddress() << "\n";
	std::cout << "phone number : " << tmp.getPhoneNumber() << "\n";
	std::cout << "birthday date : " << tmp.getBirthdayDate() << "\n";
	std::cout << "favorite meal : " << tmp.getFavoriteMeal() << "\n";
	std::cout << "underwear color : " << tmp.getUnderwearColor() << "\n";
	std::cout << "darkest secret : " << tmp.getDarkestSecret() << "\n";
}