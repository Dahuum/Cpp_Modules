#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap ST("abdurrahman");
    ST.displayInfo();
    ST.attack("abdurrahman");
    ST.displayInfo();
    ST.guardGate();
    ST.takeDamage(10);
}