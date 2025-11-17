
#include "phonebook.hpp"

int main()
{
	Contact contact;
	PhoneBook phonebook;
	std::string param;
	std::string fname;
	std::string lname;
	std::string phnb;
	std::string nickn;
	std::string darks;
	std::string index;
	int     idx;
	int     i;

	i = 0;
	while (true)
	{
		std::cout << "Enter a command please : [ADD] [SEARCH] [EXIT]\n";
		std::getline(std::cin, param);
		if (param == "ADD")
		{
			fname[0] = '\0';
			while (!fname[0])
			{
				std::cout << "Enter your first name please : \n";
				std::getline(std::cin, fname);
				if (fname[0] == '\0')
					std::cout << "Error first name filed is empty \n";
			}
			contact.setFirstName(fname);

			lname[0] = '\0';
			while (!lname[0])
			{
				std::cout << "Enter your last name please : \n";
				std::getline(std::cin, lname);
				if (lname[0] == '\0')
					std::cout << "Error one of the fields are empty !...\n";
			}
			contact.setLasrName(lname);

			nickn[0] = '\0';
			while (!nickn[0])
			{
				std::cout << "Enter your nick name please : \n";
				std::getline(std::cin, nickn);
				if (nickn[0] == '\0')
					std::cout << "Error one of the fields are empty !...\n";
			}
			contact.setNickName(nickn);

			phnb[0] = '\0';
			while (!phnb[0])
			{
				std::cout << "Enter your phone number please : \n";
				std::getline(std::cin, phnb);
				if (phnb[0] == '\0')
					std::cout << "Error one of the fields are empty !...\n";
			}
			contact.setPhoneNumber(phnb);
			
			while ()
			{
				std::cout << "Enter your Darkest secret please : \n";
				std::getline(std::cin, darks);
				if (darks[0] == '\0')
					std::cout << "Error one of the fields are empty !...\n";
			}
			contact.setDarkSecret(darks);

			phonebook.AddConatact(contact, i);
			i++;
			if (i == 8)
				i = 0;
		}
		else if (param == "SEARCH")
		{
			phonebook.display(i);
			std::cout << "Enter the index of the contact please [0,7] !... \n";
			std::getline(std::cin, index);
			idx = index[0] - '0';
			if (index.length() > 1 || !isdigit(index[0]) || idx > 7)
			{
				std::cout << "Error invalid index [0,7] !...\n";
			}
			else
				phonebook.display_contact(idx);
		}
		else if (param == "EXIT")
		{
			break;
		}
	}
	return (0);
}
