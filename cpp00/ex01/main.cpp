#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook P;
	std::string user_input;

	while (1337)
	{
		std::cout << "Enter Your Command :(ADD, SEARCH, EXIT): ";
		std::getline(std::cin, user_input);
		// std::cout << user_input << std::endl;
		if ((user_input == "add") || (user_input == "ADD"))
			P.add();
		else if ((user_input == "SEARCH") || (user_input == "search"))
		{
			// if (P.current == 0)
			// {
			// 	std::cout << "No User In The List" << std::endl;
			// 	continue ;
			// }
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