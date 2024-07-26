#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie* newZombie = new(std::nothrow) Zombie(name);
    if (newZombie == NULL)
    {
        std::cerr << "Memory allocation faild" << std::endl;
        return NULL;
    }
    return newZombie;
}
