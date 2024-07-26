#include "Zombie.hpp"

Zombie::Zombie(): name(""){}

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

void Zombie::setName(const std::string& n){ name = n; }
