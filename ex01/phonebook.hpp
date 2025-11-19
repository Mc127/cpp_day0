#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include <iostream>
#include <iomanip>
#include "contact.hpp"

class PhoneBook{
	private:
		Contact contacts[8];
	public:
		void AddConatact(Contact contact, int i)
		{
			contacts[i] = contact;
		}
		void display(int index)
		{
			std::cout << std::setw(10) << "Index"  << " | ";
			std::cout << std::setw(10) << "First Name" << " | ";
			std::cout << std::setw(10) << "Last Name" << " | ";
			std::cout << std::setw(10) << "Nick Name" << " |\n";
			int i = 0;
			while (i < index)
			{
				std::cout << std::setw(10) << i << " | ";
				if (contacts[i].getFirstName().length() > 10)
					std::cout << contacts[i].getFirstName().substr(0, 9) << "." << " | ";
				else
					std::cout << std::setw(10) << contacts[i].getFirstName() << " | ";

				if (contacts[i].getLastName().length() > 10)
					std::cout << contacts[i].getLastName().substr(0, 9) << "." << " | " ;
				else
					std::cout << std::setw(10) << contacts[i].getLastName() << " | " ;
				if (contacts[i].getNickName().length() > 10)
					std::cout << contacts[i].getNickName().substr(0, 9) << "." << " |\n";
				else
					std::cout << std::setw(10) << contacts[i].getNickName() << " |\n";
				i++;
			}
		}
		void display_contact(int index)
		{
			std::cout << "contact " << index << "\n"; 
			std::cout << "First Name : " << contacts[index].getFirstName() <<'\n';
			std::cout << "Last Name : "<< contacts[index].getLastName() << '\n';
			std::cout << "Nick Name : " << contacts[index].getNickName() << '\n';
			std::cout << "Phone Number : " << contacts[index].getPhoneNumber() << '\n';
			std::cout << "Darkest Secret : " << contacts[index].getDarkSecret() << '\n';
			std::cout << "\n";
		}
};

#endif