#include "FragTrap.hpp"

FragTrap::FragTrap(){}

FragTrap::FragTrap(std::string n): ClapTrap(n)
{
    std::cout << std::endl;
    std::cout << "-----------------" << std::endl;
    std::cout << "Frag constructor" << std::endl;
    std::cout << "-----------------" << std::endl;
    std::cout << std::endl;

    this->hitPoint = 100;
    this->energyPoint = 100;
    this->attackDamage = 30;
}

 void FragTrap::displayInfo()
 {
    // Directly accessing protected members
    std::cout << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Hit Points: " << hitPoint << std::endl;
    std::cout << "Energy Points: " << energyPoint << std::endl;
    std::cout << "Attack Damage: " << attackDamage << std::endl;
    std::cout << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->name << " enthusiastically requests a high five! ✋" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << std::endl;
    std::cout << "-----------------" << std::endl;
    std::cout << "FragTrap " << name << " offline. Farewell!" << std::endl;
    std::cout << "-----------------" << std::endl;
    std::cout << std::endl;
}