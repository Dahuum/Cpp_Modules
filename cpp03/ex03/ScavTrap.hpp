#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string n);
        ~ScavTrap();
        void guardGate();
        
        
        void displayInfo();
        void attack(const std::string& target); 
}; 

#endif