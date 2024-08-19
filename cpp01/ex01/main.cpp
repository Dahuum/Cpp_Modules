#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
    int hordeSize = 2;
    std::string zombieName = "Walker";

    std::cout << "Creating a horde of " << hordeSize << " zombies named " << zombieName << std::endl;
    
    Zombie* horde = zombieHorde(hordeSize, zombieName);

    std::cout << "Announcing each zombie in the horde:" << std::endl;
    for (int i = 0; i < hordeSize; i++) {
        std::cout << "Zombie " << i + 1 << ": ";
        horde[i].announce();
    }

    std::cout << "Deleting the zombie horde" << std::endl;
    delete[] horde;
}