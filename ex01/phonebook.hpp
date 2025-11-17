#ifndef PHONE_BOOK
#define PHONE_BOOK

#include <iostream>
#include <iomanip>

class Contact{
	private:
	    std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string	phone_number;
		std::string darkest_secret;
	public:
		void setFirstName(std::string firstName){
			first_name = firstName;
		}
		std::string getFirstName(){
			return (first_name);
		}
		void setLasrName(std::string lastName){
			last_name = lastName;
		}
		std::string getLasrName(){
			return (last_name);
		}
		void setNickName(std::string NickName){
			nickname = NickName;
		}
		std::string getNickName(){
			return (nickname);
		}
		void setPhoneNumber(std::string phoneNumber){
			phone_number = phoneNumber;
		}
		std::string getPhoneNumber(){
			return (phone_number);
		}
		void setDarkSecret(std::string darkestSecret){
			darkest_secret = darkestSecret;
		}
		std::string getDarkSecret(){
			return (darkest_secret);
		}
};

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
				std::cout << std::setw(10) << contacts[i].getFirstName() << " | " ;
				std::cout << std::setw(10) << contacts[i].getLasrName() << " | " ;
				std::cout << std::setw(10) << contacts[i].getNickName()  << " |\n";
				i++;
			}
		}
		void display_contact(int index)
		{
			std::cout << "contact " << index << "\n"; 
			std::cout << "my full name is " << contacts[index].getFirstName() << " "<< contacts[index].getLasrName() <<'\n';
			std::cout << "as a nikcname i'm " << contacts[index].getNickName() << '\n';
			std::cout << "if u want to call me u can use " << contacts[index].getPhoneNumber() << '\n';
			std::cout << "one of my secrect is " << contacts[index].getDarkSecret() << '\n';
			std::cout << "\n";
		}
};

#endif