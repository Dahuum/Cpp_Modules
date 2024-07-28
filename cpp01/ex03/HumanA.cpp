#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon& w): name(n), gun(w) {}

void HumanA::attack()
{
    std::cout << name;
    std::cout << " attacks with their ";
    std::cout << gun.getType() << std::endl;
}

