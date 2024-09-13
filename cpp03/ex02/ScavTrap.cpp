#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    this->setName("Unknown");
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    std::cout << "ScavTrap created: " << this->getName() << std::endl;
}

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name)
{
    this->setName(name);
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    std::cout << "ScavTrap created: " << this->getName() << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
    *this = other;
    std::cout << "ScavTrap copied: " << this->getName() << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
    {
        this->setName(other.getName());
        this->setHitPoints(other.getHitPoints());
        this->setEnergyPoints(other.getEnergyPoints());
        this->setAttackDamage(other.getAttackDamage());
    }
    std::cout << "ScavTrap assigned: " << this->getName() << std::endl;
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << ScavTrap::getName() << " is now in Gate Keeper mode!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->getEnergyPoints() > 0)
    {
        std::cout << "ScavTrap " << this->getName() << " attacks " << target << " for " << this->getAttackDamage() << " damage." << std::endl;
        this->setEnergyPoints(this->getEnergyPoints() - 1);
    }
    else
    {
        std::cout << "ScavTrap " << this->getName() << " is out of energy and cannot attack!" << std::endl;
    }
}

void ScavTrap::displayInfo()
{
    std::cout << "Name: " << ScavTrap::getName() << ", HP: " << ScavTrap::getHitPoints() << ", EP: " << ScavTrap::getEnergyPoints() << ", AD: " << ScavTrap::getAttackDamage() << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << ScavTrap::getName() << " destroyed." << std::endl;
}