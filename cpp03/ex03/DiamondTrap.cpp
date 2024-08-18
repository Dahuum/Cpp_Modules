#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string n): ClapTrap(n + "_clap_name"), name(n)
{
    this->hitPoint = FragTrap::hitPoint;
    this->energyPoint = ScavTrap::energyPoint;
    this->attackDamage = FragTrap::attackDamage;
}
void DiamondTrap::whoAmI()
{
    std::cout << "This is my name: ";
    std::cout << this->name << std::endl;
    std::cout << "----------------------\n";
    std::cout << "And this is ClapTrap name: ";
    std::cout << ClapTrap::name << std::endl; 
}