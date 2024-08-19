#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>
#include <cstdlib>

class Harl {
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );

        // c++11
        // void ( Harl::*funcPtr[4] )() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error }; 
        typedef void ( Harl::*funcPtr )(void);
        funcPtr funcArray[4];
    public:
        Harl();
        void complain( std::string level );
};

#endif