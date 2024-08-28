#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap 
{
    private:
        std::string name;
    
    public:
        DiamondTrap();
        DiamondTrap( std::string n );
        DiamondTrap( const DiamondTrap& other );
        DiamondTrap& operator=( const DiamondTrap& other );
        
        using ScavTrap::attack;
        void whoAmI();
        
        ~DiamondTrap();
};

#endif