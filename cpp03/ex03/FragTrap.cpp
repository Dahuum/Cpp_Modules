#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap created." << std::endl;
    this->hitPoint = 100;
    this->energyPoint = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
    std::cout << "FragTrap copied." << std::endl;
    *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->hitPoint = other.hitPoint;
        this->energyPoint = other.energyPoint;
        this->attackDamage = other.attackDamage;
    }
    std::cout << "FragTrap assigned." << std::endl;
    return *this;
}

FragTrap::FragTrap(std::string n): ClapTrap(n)
{
    std::cout << "FragTrap " << this->name << " created." << std::endl;
    this->hitPoint = 100;
    this->energyPoint = 100;
    this->attackDamage = 30;
}

void FragTrap::displayInfo()
{
    std::cout << "Name: " << name << ", HP: " << hitPoint << ", EP: " << energyPoint << ", AD: " << attackDamage << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->name << " requests a high five! ✋" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " destroyed." << std::endl;
}