#include "HumanB.hpp"

HumanB::HumanB(std::string n): name(n), gun(NULL){}

void HumanB::setWeapon( Weapon& w )
{
    this->gun = &w;
}

void HumanB::attack()
{
    if (gun)
    {
        std::cout << name;
        std::cout << " attacks with their ";
        std::cout << gun->getType() << std::endl;
    }
    else
        std::cout << name << " attacks with their Hands...." << std::endl;
}

