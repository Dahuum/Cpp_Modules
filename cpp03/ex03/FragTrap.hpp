#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap: virtual public ClapTrap 
{
    public:
        FragTrap();
        FragTrap( std::string n );
        FragTrap(const FragTrap& other );
        FragTrap& operator=(const FragTrap& other);
        ~FragTrap();

        void displayInfo();
        void highFivesGuys(void);
};

#endif