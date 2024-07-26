#include "Zombie.hpp"

int main( void )
{
    int N;

    std::cout << "Enter Your Horde Zombie Num: (N = ?):  ";
    std::cin >> N;
    Zombie* New = zombieHorde(N, "Yahyawat");
    for(int i = 0; i < N; i++)
        New[i].announce();
    delete[] New;
}