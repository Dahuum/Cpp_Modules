#ifndef FRAGTRAP_HPP
# define FRAGTRAPP_HPP

#include "ScavTrap.hpp"

class FragTrap: public ClapTrap 
{
    public:
        FragTrap(std::string n);
        ~FragTrap();

        void displayInfo();
        void highFivesGuys(void);
};

#endif