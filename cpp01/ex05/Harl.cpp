#include "Harl.hpp"

Harl::Harl()
{
    funcArray[0] = &Harl::debug;
    funcArray[1] = &Harl::info;
    funcArray[2] = &Harl::warning;
    funcArray[3] = &Harl::error;
}

void Harl::debug(void) 
{
    std::cout << "Debug: Coffee machine is running low on beans." << std::endl;
}

void Harl::info(void) 
{
    std::cout << "Info: Daily system backup completed successfully." << std::endl;
}

void Harl::warning(void) 
{
    std::cout << "Warning: Disk space is almost full." << std::endl;
}

void Harl::error(void) 
{
    std::cout << "Error: Network connection lost!" << std::endl;
}

void Harl::complain( std::string level )
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    size_t i = -1;

    while (++i < 4)
    {
        while (level == levels[i])
        {
            (this->*funcArray[i])();
            std::exit(1);
        }
    }
    std::cout << "Not a Valid Level......" << std::endl;
}