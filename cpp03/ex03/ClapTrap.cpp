#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("Unknown"), hitPoint(10), energyPoint(10), attackDamage(0)
{
    std::cout << "ClapTrap Default constructor" << std::endl;
}

ClapTrap::ClapTrap( const std::string& _name ): name(_name), hitPoint(10), energyPoint(10), attackDamage(0)
{
    std::cout << "ClapTrap Parameter constructor" << std::endl;
    printf("Name: %s\n", name.c_str());
}

ClapTrap::ClapTrap( const ClapTrap& other ) {
    std::cout << "ClapTrap Copy constructor" << std::endl;
    *this = other;   
}

ClapTrap& ClapTrap::operator=( const ClapTrap& other )
{
    std::cout << "ClapTrap Assignment operator" << std::endl;
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

// Setters
void ClapTrap::setName(const std::string& __name) { this->name = __name; }
void ClapTrap::setHitPoints(unsigned int __hitPoints) { this->hitPoint = __hitPoints; }
void ClapTrap::setEnergyPoints(unsigned int __energyPoints) { this->energyPoint = __energyPoints; }
void ClapTrap::setAttackDamage(unsigned int __attackDamage) { this->attackDamage = __attackDamage; }

// Getters
std::string ClapTrap::getName() const { return name; }
unsigned int ClapTrap::getHitPoints() const { return hitPoint; }
unsigned int ClapTrap::getEnergyPoints() const { return energyPoint; }
unsigned int ClapTrap::getAttackDamage() const { return attackDamage; }

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor" << std::endl;
}