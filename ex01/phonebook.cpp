
#include "phonebookbuckup.hpp"

int main()
{
	Contact contact1;
	PhoneBook phonebook;
	std::string param;
    std::string fname;
    std::string lname;
    std::string phnb;
    std::string nickn;
    std::string darks;

    // while (true)
    // {
        std::cout << "Enter A Command please !... \n";
        std::cin >> param;
        if (param == "ADD")
        {
            std::cout << "Enter your first name please !\n";
            std::cin >> fname;
            contact1.setFirstName(fname);

            std::cout << "Enter your last name please !\n";
            std::cin >> lname;
            contact1.setLasrName(lname);

            std::cout << "Enter your nick name please !\n";
            std::cin >> nickn;
            contact1.setNickName(nickn);

            std::cout << "Inter your phone number please !\n";
            std::cin >> phnb;
            contact1.setPhoneNumber(phnb);

            std::cout << "Enter your Darkest secret please !\n";
            std::cin >> darks;
            contact1.setDarkSecret(darks);

			phonebook.contacts[0] = contact1;
        }
        else if (param == "SEARCH")
        {

        }
        else if (param == "EXIT")
        {

        }
		phonebook.display();
    // }
	return (0);
}