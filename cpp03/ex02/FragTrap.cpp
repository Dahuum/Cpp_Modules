#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap created." << std::endl;
    this->setName("Unknown");
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    this->setName(name);
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
    std::cout << "FragTrap created." << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    *this = other;
    std::cout << "FragTrap copied." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
    {
        this->setName(other.getName());
        this->setHitPoints(other.getHitPoints());
        this->setEnergyPoints(other.getEnergyPoints());
        this->setAttackDamage(other.getAttackDamage());
    }
    std::cout << "FragTrap assigned." << std::endl;
    return *this;
}

void FragTrap::displayInfo()
{
    std::cout << "Name: " << FragTrap::getName() << ", HP: " << FragTrap::getHitPoints() << ", EP: " << FragTrap::getEnergyPoints() << ", AD: " << FragTrap::getAttackDamage() << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->getName() << " requests a high five! ✋" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << FragTrap::getName() << " destroyed." << std::endl;
}