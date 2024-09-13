#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap 
{
    private:
        std::string name;
    
    public:
        DiamondTrap();
        DiamondTrap( const std::string& _name );
        DiamondTrap( const DiamondTrap& other );
        DiamondTrap& operator=( const DiamondTrap& other );
        
        using ScavTrap::attack;
        void whoAmI();
        void displayInfo();
        ~DiamondTrap();
};

#endif