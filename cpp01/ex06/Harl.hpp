#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl {
    private:
        void debug( void ){ std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl; }
        void info( void ){ std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl; }
        void warning( void ){ std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl; }
        void error( void ){ std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl; }

        // c++11
        // void ( Harl::*funcPtr[4] )() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error }; 
        typedef void ( Harl::*funcPtr )(void);
        funcPtr funcArray[4];
    public:
        Harl();
        void harlFilter( std::string level );
};

#endif