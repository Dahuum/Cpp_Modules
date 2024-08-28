#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("Unknown"), hitPoint(10), energyPoint(10), attackDamage(0)
{
    std::cout << std::endl;
    std::cout << "-----------------" << std::endl;
    std::cout << "ClapClap constructor" << std::endl;
    std::cout << "-----------------" << std::endl;
    std::cout << std::endl;
}

ClapTrap::ClapTrap(const std::string& n ): name(n), hitPoint(10), energyPoint(10), attackDamage(0)
{
    if (n.empty())
        this->name = "Unknown";
    std::cout << std::endl;
    std::cout << "-----------------" << std::endl;
    std::cout << "manza constructor" << std::endl;
    std::cout << "-----------------" << std::endl;
    std::cout << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& other ) {   *this = other;   }

ClapTrap& ClapTrap::operator=( const ClapTrap& other )
{
    if (this != &other)
    {
        this->name = other.name;
        this->hitPoint = other.hitPoint;
        this->energyPoint = other.energyPoint;
        this->attackDamage = other.attackDamage;
    }
    return *this;
}

void ClapTrap::attack( const std::string& target )
{
    // ClapTrap <name> blasts <target>. Damage: <damage>.
    if (this->getEnergyPoints() > 0)
    {
        std::cout << "ClapTrap "  << this->getName() << " blasts " << target << " . Damage: " << this->attackDamage << std::endl;
        this->energyPoint--;
    }
    else std::cout << "Oh no! ClapTrap " << this->getName() << " has run out of juice! No energy left to attack " << target << "!" << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount )
{
    if (this->getEnergyPoints() > 0)
    {
        this->hitPoint += amount;
        this->energyPoint--;

        // ClapTrap <name> powers up. Restored: <amount>.
        std::cout << "ClapTrap " << this->getName() << " powers up. Restored: " << amount << std::endl;
    }
    else std::cout << "Oh no! ClapTrap " << this->getName() << " has run out of juice! No energy left to attack " << "target" << "!" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount )
{
    if (this->getHitPoints() > 0 && this->getHitPoints() >= amount)
    {
        this->hitPoint -= amount;

        // ClapTrap <name> takes a hit. Ouch: <amount>.
        std::cout << "ClapTrap " << this->name << " takes a hit. Ouch: " << amount << std::endl;
    }
    else 
    {
        this->hitPoint = 0;
        std::cout << "Oh no! ClapTrap " << this->name << " can't take more damage! It already has " 
          << this->getHitPoints() << " hit points, and taking " << amount << " damage would be too much!" 
          << std::endl;
    }

}

ClapTrap::~ClapTrap()
{
    std::cout << std::endl;
    std::cout << "-----------------" << std::endl;
    std::cout << "Destructor called" << std::endl;
    std::cout << "-----------------" << std::endl;
    std::cout << std::endl;
}