#ifndef PHONE_BOOK
#define PHONE_BOOK

#include <iostream>

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
	public:
		Contact contacts[7];
		void display()
		{
			std::cout << "my full name is " << contacts[0].getFirstName() << " "<< contacts[0].getLasrName() <<'\n';
			std::cout << "as a nikcname i'm " << contacts[0].getNickName() << '\n';
			std::cout << "if u want to call me u can use " << contacts[0].getPhoneNumber() << '\n';
			std::cout << "one of my secrect is " << getDarkSecret() << '\n';
		}
};

#endif