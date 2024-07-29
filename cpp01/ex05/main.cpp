#include "Harl.hpp"

int main( void )
{
    Harl h;
    std::string level;

    std::cout << "Enter Level (DEBUG, INFO, WARNING, ERROR): ";
    std::getline(std::cin, level);
    
    if (level == "NULL" || level == "nullptr" || level.empty())
        std::cout << "Error: Please provide a valid complaint level." << std::endl;
    else
        h.complain(level);
}