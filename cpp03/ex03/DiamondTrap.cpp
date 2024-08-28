#include "DiamondTrap.hpp"

// Constructor with no parameters
DiamondTrap::DiamondTrap() : ClapTrap("Unknown_clap_name"), ScavTrap(), FragTrap(),  name("Unknown") {
    this->hitPoint = FragTrap::hitPoint;
    this->energyPoint = ScavTrap::energyPoint;
    this->attackDamage = FragTrap::attackDamage;
}

// Constructor with name parameter
DiamondTrap::DiamondTrap(std::string n) : ClapTrap(n + "_clap_name"), ScavTrap(), FragTrap(), name(n) {
    this->hitPoint = FragTrap::hitPoint;
    this->energyPoint = ScavTrap::energyPoint;
    this->attackDamage = FragTrap::attackDamage;
}

// Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other) {
    std::cout << "Diamond copy constructor" << std::endl;
    *this = other;
}


// Assignment operator
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
    std::cout << "Diamond operator=" << std::endl;
    if (this != &other) {
        ClapTrap::operator=(other);
        FragTrap::operator=(other);
        ScavTrap::operator=(other);
        this->name = other.name;
        this->hitPoint = other.hitPoint;
        this->energyPoint = other.energyPoint;
        this->attackDamage = other.attackDamage;
    }
    return *this;
}

// whoAmI function
void DiamondTrap::whoAmI() {
    std::cout << "This is my name: " << this->name << std::endl;
    std::cout << "And this is ClapTrap name: " << ClapTrap::name << std::endl;
}
// Destructor
DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor" << std::endl;
}