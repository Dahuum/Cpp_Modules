#include "Zombie.hpp"

Zombie::Zombie(std::string n): name(n){}

Zombie::~Zombie()
{
    std::cout << name << ": ";
    std::cout << " is destroyed." << std::endl;
}

void Zombie::announce( void )
{
    std::cout << name << ": ";
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}