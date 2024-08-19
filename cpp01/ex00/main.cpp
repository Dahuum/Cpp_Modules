#include "Zombie.hpp"

int main()
{
    std::cout << "Testing heap allocation:" << std::endl;
    Zombie* heapZombie = newZombie("Heapy");
    heapZombie->announce();
    delete heapZombie;

    std::cout << std::endl;

    std::cout << "Testing stack allocation:" << std::endl;
    randomChump("Stacky");

    std::cout << std::endl;

    std::cout << "Creating multiple zombies:" << std::endl;
    Zombie stackZombie("DirectStack");
    stackZombie.announce();

    Zombie* anotherHeapZombie = newZombie("AnotherHeapy");
    anotherHeapZombie->announce();
    delete anotherHeapZombie;

    randomChump("RandomChump1");
    randomChump("RandomChump2");
}