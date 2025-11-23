#ifndef PHONE_BOOK_H_
#define PHONE_BOOK_H_

int	serch_function(PhoneBook phonebook, int s_idx);
int fill_darkSecret(Contact *contact);
int fill_nickName(Contact *contact);
int fill_phoneNum(Contact *contact);
int fill_lastName(Contact *contact);
int fill_fistName(Contact *contact);
std::string trim_str(std::string str);


#endif