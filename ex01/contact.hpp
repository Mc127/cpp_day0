#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact{
	private:
	    std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string	phone_number;
		std::string darkest_secret;
	public:
		void		setFirstName(std::string firstName);
		std::string	getFirstName();
		void		setLastName(std::string lastName);
		std::string	getLastName();
		void		setNickName(std::string NickName);
		std::string	getNickName();
		void		setPhoneNumber(std::string phoneNumber);
		std::string	getPhoneNumber();
		void		setDarkSecret(std::string darkestSecret);
		std::string	getDarkSecret();
};

#endif