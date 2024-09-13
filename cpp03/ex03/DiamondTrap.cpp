#include "DiamondTrap.hpp"

// Constructor with no parameters
DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap(),  name("Unknown") 
{
    this->name = "Unknown";
    this->setName("Unknown_clap_name");
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(30);
}

// Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other) 
{
    std::cout << "Diamond copy constructor" << std::endl;
    *this = other;
}

// Constructor with name parameter
DiamondTrap::DiamondTrap(const std::string& _name) : ClapTrap(_name + "_clap_name"), ScavTrap(_name), FragTrap(_name) 
{
    this->name = _name;
    this->setName(_name + "_clap_name");
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(30);
}

// Assignment operator
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) 
{
    std::cout << "Diamond operator=" << std::endl;
    if (this != &other) {
        ClapTrap::operator=(other);
        FragTrap::operator=(other);
        ScavTrap::operator=(other);
        this->name = other.name;
        this->setHitPoints(other.getHitPoints());
        this->setEnergyPoints(other.getEnergyPoints());
        this->setAttackDamage(other.getAttackDamage());
    }
    return *this;
}

// Display info function
void DiamondTrap::displayInfo() 
{
    std::cout << "Name: " << this->name << ", HP: " << this->getHitPoints() << ", EP: " << this->getEnergyPoints() << ", AD: " << this->getAttackDamage() << std::endl;
}

// whoAmI function
void DiamondTrap::whoAmI() 
{
    std::cout << "This is my name: " << this->name << std::endl;
    std::cout << "And this is ClapTrap name: " << ClapTrap::getName() << std::endl;
}
// Destructor
DiamondTrap::~DiamondTrap() 
{
    std::cout << "DiamondTrap destructor" << std::endl;
}