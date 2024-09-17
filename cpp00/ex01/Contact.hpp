#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>
#include <cstdlib>

class Contact
{
	private:
		std::string f_name, l_name, n_name, p_num, s_num;
	public:
		// Default constructor;
		Contact();
		Contact(std::string f_, std::string l_, std::string n_, std::string p_, std::string s_);
		
		std::string getFirstName();
		std::string getLastName();
		std::string getNickName();
		std::string getPhoneNum();
		std::string getSecretNum();

		void show();
		int empty();
		void print_row();
};

#endif