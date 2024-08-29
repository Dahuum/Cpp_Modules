#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap: virtual public ClapTrap 
{
    public:
        static const int DEFAULT_HIT_POINTS = 100;
        static const int DEFAULT_ENERGY_POINTS = 100;
        static const int DEFAULT_ATTACK_DAMAGE = 30;
        FragTrap();
        FragTrap( std::string n );
        FragTrap(const FragTrap& other );
        FragTrap& operator=(const FragTrap& other);
        ~FragTrap();

        void displayInfo();
        void highFivesGuys(void);
};

#endif