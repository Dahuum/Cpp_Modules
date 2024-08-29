#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->name = "Unknown";
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap created: " << this->name << std::endl;
}

ScavTrap::ScavTrap(std::string n): ClapTrap(n)
{
    this->hitPoint = DEFAULT_HIT_POINTS;
    this->energyPoint = DEFAULT_ENERGY_POINTS;
    this->attackDamage = DEFAULT_ATTACK_DAMAGE;
    std::cout << "ScavTrap created: " << this->name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
    *this = other;
    std::cout << "ScavTrap copied: " << this->name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->hitPoint = other.hitPoint;
        this->energyPoint = other.energyPoint;
        this->attackDamage = other.attackDamage;
    }
    std::cout << "ScavTrap assigned: " << this->name << std::endl;
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " in Gate Keeper mode!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->energyPoint > 0)
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target << " for " << this->attackDamage << " damage." << std::endl;
        this->energyPoint--;
    }
    else
    {
        std::cout << "ScavTrap " << this->name << " is out of energy!" << std::endl;
    }
}

void ScavTrap::displayInfo()
{
    std::cout << "Name: " << name << ", HP: " << hitPoint << ", EP: " << energyPoint << ", AD: " << attackDamage << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " destroyed." << std::endl;
}