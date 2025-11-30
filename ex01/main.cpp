#include "phonebook.hpp"

int main()
{
	Contact		contact;
	PhoneBook	phonebook;
	std::string	param;
	int     i,	search;

	i = 0;
	search = 0;
	phonebook.InitilizeIdx();
	while (true)
	{
		std::cout << "Enter a command please : [ADD] [SEARCH] [EXIT]\n";
		if (!std::getline(std::cin, param))
			break;
		param = trim_str(param);
		if (param == "ADD")
		{
			if (fill_fistName(&contact) || fill_lastName(&contact) ||
					fill_nickName(&contact) || fill_phoneNum(&contact) ||
						fill_darkSecret(&contact))
				break;
			phonebook.AddConatact(contact, i);
			i++;
			search++;
			if (i == 8)
				i = 0;
		}
		else if (param == "SEARCH" && search != 0)
			serch_function(phonebook, search);
		else if (param == "EXIT")
			break;
	}
	return (0);
}
