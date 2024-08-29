#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
    protected:
        std::string name;
        unsigned int hitPoint;
        unsigned int energyPoint;
        unsigned int attackDamage;
    public:
        ClapTrap();                                  // Constructor
        ClapTrap( const std::string& n );            // Constructor with name parameter
        ClapTrap( const ClapTrap& other );           // Copy constructor
        ClapTrap& operator=( const ClapTrap& other );// Copy assignment operator
        ~ClapTrap();                                 // Destructor

        void attack( const std::string& target );
        void takeDamage( unsigned int amount );
        void beRepaired( unsigned int amount );

        // TEST Func();
        friend void runTests();
};

#endif