#include "Zombie.hpp"

int main( void )
{
    randomChump("Yahya");

    Zombie* myZombie = newZombie("Moughit");
    myZombie->announce();
    delete myZombie;
}