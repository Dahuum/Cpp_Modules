#include "Harl.hpp"

Harl::Harl()
{
    funcArray[0] = &Harl::debug;
    funcArray[1] = &Harl::info;
    funcArray[2] = &Harl::warning;
    funcArray[3] = &Harl::error;
}

void Harl::harlFilter( std::string level )
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    size_t i;

    if (level == levels[0]) i = 0;
    else if (level == levels[1]) i = 1;
    else if (level == levels[2]) i = 3;
    else if (level == levels[3]) i = 4;

    switch (i)
    {
        case 0:
            std::cout << "[ DEBUG ]" << std::endl;
            (this->*funcArray[0])();
            std::cout << "[ INFO ]" << std::endl;
            (this->*funcArray[1])();
            std::cout << "[ WARNING ]" << std::endl;
            (this->*funcArray[2])();
            std::cout << "[ ERROR ]" << std::endl;
            (this->*funcArray[3])();
            break ;
        case 1:
            std::cout << "[ INFO ]" << std::endl;
            (this->*funcArray[1])();
            std::cout << "[ WARNING ]" << std::endl;
            (this->*funcArray[2])();
            std::cout << "[ ERROR ]" << std::endl;
            (this->*funcArray[3])();
            break ;
        case 2:
            std::cout << "[ WARNING ]" << std::endl;
            (this->*funcArray[2])();
            std::cout << "[ ERROR ]" << std::endl;
            (this->*funcArray[3])();
            break ;
        case 3:
            std::cout << "[ ERROR ]" << std::endl;
            (this->*funcArray[3])();
            break ;
        default:
            std::cout <<  "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}