#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>


class Contact
{
	private:
		std::string f_name, l_name, n_name, p_num, s_num;
	public:
		// Default constructor;
		Contact():
			f_name("Unknown"), l_name("Unknown"), n_name("Unknown"), p_num("0"), s_num("0"){}
		Contact(std::string f_, std::string l_, std::string n_, std::string p_, std::string s_):
			f_name(f_), l_name(l_), n_name(n_), p_num(p_), s_num(s_){}
		
		std::string getFirstName(){return f_name;}
		std::string getLastName(){return l_name;}
		std::string getNickName(){return n_name;}
		std::string getPhoneNum(){return p_num;}
		std::string getSecretNum(){return s_num;}

		void show(){
			std::cout << "First Name: " << getFirstName() << std::endl;
			std::cout << "Last Name: "  << getLastName()  << std::endl;
			std::cout << "Nick Name: "  << getNickName()  << std::endl;
			std::cout << "Phone Num: "  << getPhoneNum()  << std::endl;
			std::cout << "Darkest Secret: " << getSecretNum() << std::endl;
		}
		int empty(){
			return f_name == "Unknown" && l_name == "Unknown" && n_name == "Unknown" && p_num == "0" && s_num == "0";
		}

		void print_row(){
			std::string f_ = getFirstName();
			f_ = (f_.length() > 10) ? (f_.substr(0, 9) + '.') : (f_);
			std::string l_ = getLastName();
			l_ = (l_.length() > 10) ? (l_.substr(0, 9) + '.') : (l_);
			std::string n_ = getNickName();
			n_ = (n_.length() > 10) ? (n_.substr(0, 9) + '.') : (n_);

			std::cout << std::setw(10) << std::right << f_ << "|";
			std::cout << std::setw(10) << std::right << l_ << "|";
			std::cout << std::setw(10) << std::right << n_ << std::endl;
		}
};

#endif