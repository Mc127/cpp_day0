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
		void setFirstName(std::string firstName){
			first_name = firstName;
		}
		std::string getFirstName(){
			return (first_name);
		}
		void setLastName(std::string lastName){
			last_name = lastName;
		}
		std::string getLastName(){
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

#endif