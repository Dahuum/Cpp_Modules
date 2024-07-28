#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB {
    private:
        std::string name;
        Weapon* gun;
    public:
        HumanB( std::string n );
        void setWeapon( Weapon& w );
        void attack();
};

#endif