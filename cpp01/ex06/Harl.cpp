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


void Harl::harlFilter( std::string level )
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    size_t i = 0;

    while (level == levels[0])
    {
        i = 0;
        break ;
    }
    while (level == levels[1])
    {
        i = 1;
        break ;
    }
    while (level == levels[2])
    {
        i = 2;
        break ;
    }
    while (level == levels[3])
    {
        i = 3;
        break ;
    }

    switch (i)
    {
        case 0:
            std::cout << "[ DEBUG ]" << std::endl;
            (this->*funcArray[0])();
        case 1:
            std::cout << "[ INFO ]" << std::endl;
            (this->*funcArray[1])();
        case 2:
            std::cout << "[ WARNING ]" << std::endl;
            (this->*funcArray[2])();
        case 3:
            std::cout << "[ ERROR ]" << std::endl;
            (this->*funcArray[3])();
            break ;
        default:
            std::cout <<  "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}