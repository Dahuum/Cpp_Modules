#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
    public:
        static const int DEFAULT_HIT_POINTS = 100;
        static const int DEFAULT_ENERGY_POINTS = 50;
        static const int DEFAULT_ATTACK_DAMAGE = 20;
        ScavTrap();
        ScavTrap( std::string n );
        ScavTrap(const ScavTrap& other );
        ScavTrap& operator=(const ScavTrap& other);
        ~ScavTrap();
        void guardGate();
        
        
        void displayInfo();
        void attack(const std::string& target); 
}; 

#endif