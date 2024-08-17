#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact C[8];
	public:
		int current;
		PhoneBook();
		void row();
		bool is_empty_or_spaces(const std::string &str);
		void add();
		void print();
		void p_row();
};



#endif