#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0)
    {
        std::cerr << "Wrong N Entered!!!" << std::endl;
        return NULL;
    }
    Zombie* hordeZombie = new(std::nothrow) Zombie[N];
    if (hordeZombie == NULL)
    {
        std::cerr << "Memory allocation faild" << std::endl;
        return NULL;
    }
    for (int i = 0; i < N ; i++)
        hordeZombie[i].setName(name);
    return hordeZombie;
}