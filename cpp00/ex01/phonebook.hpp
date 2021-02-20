#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Phonebook
{
	private:
		std::string		first_name;
		std::string		last_name;
		std::string		nickname;
		std::string		login;
		std::string		postal_address;
		std::string		email_address;
		std::string		phone_number;
		std::string		birthday_date;
		std::string		favorite_meal;
		std::string		underwear_color;
		std::string		darkest_secret;
	public:
		void			setFirstName(std::string arg);
		void			setLastName(std::string arg);
		void			setNickname(std::string arg);
		void			setLogin(std::string arg);
		void			setPostalAddress(std::string arg);
		void			setEmailAddress(std::string arg);
		void			setPhoneNumber(std::string arg);
		void			setBirthdayDate(std::string arg);
		void			setFavoriteMeal(std::string arg);
		void			setUnderwearColor(std::string arg);
		void			setDarkestSecret(std::string arg);
		std::string		getFirstName(void);
		std::string		getLastName(void);
		std::string		getNickname(void);
		std::string		getLogin(void);
		std::string		getPostalAddress(void);
		std::string		getEmailAddress(void);
		std::string		getPhoneNumber(void);
		std::string		getBirthdayDate(void);
		std::string		getFavoriteMeal(void);
		std::string		getUnderwearColor(void);
		std::string		getDarkestSecret(void);
};

void		commandAdd(Phonebook *book);
void		printHead(void);
void		printBook(Phonebook book, int idx);
void		printTail(void);
void		getAndPrintEntry(Phonebook book[], int idx);

#endif