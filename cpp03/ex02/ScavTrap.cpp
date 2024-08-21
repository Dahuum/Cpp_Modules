#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string n): ClapTrap(n)
{
    std::cout << std::endl;
    std::cout << "-----------------" << std::endl;
    std::cout << "Scav constructor" << std::endl;
    std::cout << "-----------------" << std::endl;
    std::cout << std::endl;

    this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 20;
}

void ScavTrap::guardGate()
{
    std::cout << std::endl;
    std::cout << "ScavTrap " << name << ": Gate keeper mode active!" << std::endl;
    std::cout << std::endl;
}


void ScavTrap::attack(const std::string& target)
{
    // ClapTrap <name> blasts <target>. Damage: <damage>.
    if (this->getEnergyPoints() > 0)
    {
        std::cout << "ScavTrap "  << this->getName() << " blasts " << target << " . Damage: " << this->attackDamage << std::endl;
        this->energyPoint--;
    }
    else std::cout << "Oh no! ClapTrap " << this->getName() << " has run out of juice! No energy left to attack " << target << "!" << std::endl;
}

 void ScavTrap::displayInfo()
 {
    // Directly accessing protected members
    std::cout << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Hit Points: " << hitPoint << std::endl;
    std::cout << "Energy Points: " << energyPoint << std::endl;
    std::cout << "Attack Damage: " << attackDamage << std::endl;
    std::cout << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << std::endl;
    std::cout << "-----------------" << std::endl;
    std::cout << "ScavTrap " << name << " offline. Farewell!" << std::endl;
    std::cout << "-----------------" << std::endl;
    std::cout << std::endl;
}