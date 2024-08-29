#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

 class ClapTrap {
    protected:
        std::string name;
        unsigned int hitPoint;
        unsigned int energyPoint;
        unsigned int attackDamage;
    protected:
        unsigned int getHitPoints();
        unsigned int getEnergyPoints();
        unsigned int getAttackDamage();
        std::string getName();
    public:
        ClapTrap();                                  // Constructor
        ClapTrap( const std::string& n );            // Constructor with name parameter
        ClapTrap( const ClapTrap& other );           // Copy constructor
        ClapTrap& operator=( const ClapTrap& other );// Copy assignment operator
        ~ClapTrap();                                 // Destructor

        virtual void attack( const std::string& target );
        void takeDamage( unsigned int amount );
        void beRepaired( unsigned int amount );
};

#endif