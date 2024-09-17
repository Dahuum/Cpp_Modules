#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook P;
	std::string user_input;

	Contact c;

	while (1337)
	{
		std::cout << "Enter Your Command :(ADD, SEARCH, EXIT): ";
		std::getline(std::cin, user_input);
		if (std::cin.eof())
			break;
		 if ((user_input == "add") || (user_input == "ADD"))
			P.add();
		else if ((user_input == "SEARCH") || (user_input == "search"))
		{
			P.row();
			P.p_row();
			P.print();
		}
		else if ((user_input == "EXIT") || (user_input == "exit"))
			break;
		else
			std::cout << "Try To Enter The Right Cmd's" << std::endl;
	}
}