#include "phonebook.hpp"

#include <cstdlib>

int fill_fistName(Contact *contact)
{
	std::string fistName;

	while (fistName.empty())
	{
		std::cout << "Enter your first name please : \n";
		if (!std::getline(std::cin, fistName))
			return (1);
		if (fistName.empty())
			std::cout << "Error first name filed is empty \n";
	}
	contact->setFirstName(fistName);
	return (0);
}
int fill_lastName(Contact *contact)
{
	std::string lastName;

	while (lastName.empty())
	{
		std::cout << "Enter your last name please : \n";
		if (!std::getline(std::cin, lastName))
			return (1);
		if (lastName.empty())
			std::cout << "Error last name fields are empty !...\n";
	}
	contact->setLastName(lastName);
	return (0);
}
int fill_phoneNum(Contact *contact)
{
	std::string phoneNum;
	
	while (phoneNum.empty())
	{
		std::cout << "Enter your phone number please : \n";
		if (!std::getline(std::cin, phoneNum))
			return (1);
		if (phoneNum.empty())
			std::cout << "Error phone number fields are empty !...\n";
	}
	contact->setPhoneNumber(phoneNum);
	return (0);
}
int fill_nickName(Contact *contact)
{
	std::string nickName;

	while (nickName.empty())
	{
		std::cout << "Enter your nick name please : \n";
		if (!std::getline(std::cin, nickName))
			return 1;
		if (nickName.empty())
			std::cout << "Error nick name fields are empty !...\n";
	}
	contact->setNickName(nickName);
	return 0;
}
int fill_darkSecret(Contact *contact)
{
	std::string darkSecret;

	while (darkSecret.empty())
	{
		std::cout << "Enter your Darkest secret please : \n";
		if (!std::getline(std::cin, darkSecret))
			return 1;
		if (darkSecret.empty())
			std::cout << "Error Darkest secret fields are empty !...\n";
	}
	contact->setDarkSecret(darkSecret);
	return 0;
}

int	serch_function(PhoneBook phonebook)
{
	std::string index;
	int     idx;

	phonebook.display();
	while (index.empty())
	{
		std::cout << "Enter the index of the contact please [0,7] !... \n";
		if (!std::getline(std::cin, index))
			return 1;
		if (index.length() > 1 || !isdigit(index[0]))
		{
			std::cout << "Error invalid index [0,7] !...\n";
			index = "";
		}
		idx = index[0] - '0';
		if (idx > 7)
		{
			std::cout << "Error invalid index [0,7] !...\n";
			index = "";
		}
	}
	phonebook.display_contact(idx);
	return 0;
}

int main()
{
	Contact contact;
	PhoneBook phonebook;
	std::string param;
	int     i, search;

	i = 0;
	search = 0;
	phonebook.InitilizeIdx();
	while (true)
	{
		std::cout << "Enter a command please : [ADD] [SEARCH] [EXIT]\n";
		if (!std::getline(std::cin, param))
			break;
		if (param == "ADD")
		{
			if (fill_fistName(&contact) || fill_lastName(&contact) ||
					fill_nickName(&contact) || fill_phoneNum(&contact) ||
						fill_darkSecret(&contact))
				break;
			phonebook.AddConatact(contact, i);
			i++;
			search = 1;
			if (i == 8)
				i = 0;
		}
		else if (param == "SEARCH" && search != 0)
			serch_function(phonebook);
		else if (param == "EXIT")
			break;
	}
	return (0);
}
