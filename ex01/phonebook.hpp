#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include <iostream>
#include <iomanip>
#include "contact.hpp"

class PhoneBook{
	private:
		Contact	contacts[8];
		int		idx;
	public:
		void	InitilizeIdx();
		void	AddConatact(Contact contact, int i);
		void	display();
		void	display_contact(int index);
};

int			serch_function(PhoneBook phonebook, int s_idx);
int			fill_darkSecret(Contact *contact);
int			fill_nickName(Contact *contact);
int			fill_phoneNum(Contact *contact);
int			fill_lastName(Contact *contact);
int			fill_fistName(Contact *contact);
std::string	trim_str(std::string str);

#endif