#ifndef FRAGTRAP_HPP
# define FRAGTRAPP_HPP

#include "ScavTrap.hpp"

class FragTrap: virtual public ClapTrap 
{
    public:
        FragTrap();
        FragTrap(std::string n);
        ~FragTrap();

        void displayInfo();
        void highFivesGuys(void);
};

#endif