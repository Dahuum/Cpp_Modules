#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap 
{
    private:
        std::string name;
    
    public:
        DiamondTrap( std::string n );
        using ScavTrap::attack;
        void whoAmI();
};

#endif