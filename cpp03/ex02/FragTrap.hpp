# define FRAGTRAPP_HPP
#ifndef FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap: public ClapTrap 
{
    public:
        FragTrap();
        FragTrap(const std::string& name);
        FragTrap(const FragTrap& other );
        FragTrap& operator=(const FragTrap& other);
        ~FragTrap();

        void displayInfo();
        void highFivesGuys(void);
};

#endif