#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact C[8];
		int current;
	public:
		PhoneBook(): current(0) {
			for (int i = 0; i < 8; i++)
				C[i] = Contact();
		}
		void row(){
			std::cout << std::setw(10) << std::right << "Index" << "|";
			std::cout << std::setw(10) << std::right << "First Name" << "|";
			std::cout << std::setw(10) << std::right << "Last Name" << "|";
			std::cout << std::setw(10) << std::right << "Nick Name" << "\n";
		}
		bool is_empty_or_spaces(const std::string &str) {
		int len = str.length();
        for (int i = 0; i < len; i ++) {
            if (!isspace(str[i])) {
                return false;
            }
        }
        return true;
    }

		void add(){
			std::string f_, l_, n_, p_, s_;
			do{
				std::cout << "Enter First Name: ";
				std::getline(std::cin, f_);
			}while (is_empty_or_spaces(f_));

			do{
				std::cout << "Enter Last Name: ";
				std::getline(std::cin, l_);
			}while (is_empty_or_spaces(l_));

			do{
				std::cout << "Enter Nick Name: ";
				std::getline(std::cin, n_);
			} while (is_empty_or_spaces(n_));

			do{
				std::cout << "Enter Phone Number: ";
				std::getline(std::cin, p_);
			}while (is_empty_or_spaces(p_));

			do{
				std::cout << "Enter Darkest Secret: ";
				std::getline(std::cin, s_);
			}while (is_empty_or_spaces(s_));
			
			C[current] = Contact(f_, l_, n_, p_, s_);
			current = (current + 1) % 8;
		}
		void print(){
			std::string index_str;
			std::cout << "Enter The Contact Index: ";
			std::cin >> index_str;
			if (index_str.length() == 1 && std::isdigit(index_str[0]) )
			{
				int index = index_str[0] - 48;
				if (index >= 1 && index <= 8 && !C[index - 1].empty())
				{
					std::cout << index << std::endl;
					C[index - 1].show();
					std::cout << "---------------" << std::endl;
					return ;
				}
			}
			std::cout << "No User In This Index!!" << std::endl;
		}
		
		void p_row(){
			for (int i = 0; i < 8; i++){
				if (!C[i].empty())
				{
					std::cout << std::setw(10) << std::right << i + 1 << "|";
					C[i].print_row();
				}
			}
		}
};



#endif