# define FRAGTRAPP_HPP
#ifndef FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap: virtual public ClapTrap 
{
    public:
        FragTrap();
        FragTrap(const std::string& _name);
        FragTrap(const FragTrap& other );
        FragTrap& operator=(const FragTrap& other);
        ~FragTrap();

        void displayInfo();
        void highFivesGuys(void);
};

#endif