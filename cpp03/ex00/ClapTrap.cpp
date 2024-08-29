#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("Unknown"), hitPoint(10), energyPoint(10), attackDamage(0)
{
    std::cout << "ClapTrap Default constructor" << std::endl;
}

ClapTrap::ClapTrap(const std::string& n ): name(n), hitPoint(10), energyPoint(10), attackDamage(0)
{
    if (n.empty())
        this->name = "Unknown";
    std::cout << "ClapTrap constructor" << std::endl;
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
    if (this->energyPoint > 0)
    {
        std::cout << "ClapTrap "  << this->name << " attacks " << target << " for " << this->attackDamage << " damage." << std::endl;
        this->energyPoint--;
    }
    else std::cout << "ClapTrap " << this->name << " is out of energy!" << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount )
{
    if (this->energyPoint > 0)
    {
        this->hitPoint += amount;
        this->energyPoint--;
        std::cout << "ClapTrap " << this->name << " repairs for " << amount << " HP." << std::endl;
    }
    else std::cout << "ClapTrap " << this->name << " is out of energy!" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount )
{
    if (this->hitPoint > 0 && this->hitPoint >= amount)
    {
        this->hitPoint -= amount;
        std::cout << "ClapTrap " << this->name << " takes " << amount << " damage." << std::endl;
    }
    else 
    {
        this->hitPoint = 0;
        std::cout << "ClapTrap " << this->name << " is out of HP!" << std::endl;
    }
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor" << std::endl;
}