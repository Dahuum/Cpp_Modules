#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
    private:
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

        std::string getName() {  return this->name;  };
        unsigned int getHitPoints(){  return this->hitPoint;  }
        unsigned int getEnergyPoints(){  return this->energyPoint;  }
        unsigned int getAttackDamage() {  return this->attackDamage;  }
        void attack( const std::string& target );
        void takeDamage( unsigned int amount );
        void beRepaired( unsigned int amount );
};

#endif