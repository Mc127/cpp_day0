#include "contact.hpp"

void Contact::setFirstName(std::string firstName)
{
	first_name = firstName;
}

std::string Contact::getFirstName()
{
	return (first_name);
}

void Contact::setLastName(std::string lastName)
{
	last_name = lastName;
}

std::string Contact::getLastName()
{
	return (last_name);
}

void Contact::setNickName(std::string NickName)
{
	nickname = NickName;
}

std::string Contact::getNickName()
{
	return (nickname);
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
	phone_number = phoneNumber;
}

std::string Contact::getPhoneNumber(){
	return (phone_number);
}

void Contact::setDarkSecret(std::string darkestSecret)
{
	darkest_secret = darkestSecret;
}

std::string Contact::getDarkSecret(){
	return (darkest_secret);
}