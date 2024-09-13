#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap a, b(a), c;
    c = a;
    a.setName("A");
    b.setName("B");
    c.setName("C");

    // Display initial info
    std::cout << "Initial States:" << std::endl;
    a.displayInfo();
    b.displayInfo();
    c.displayInfo();

    // Round 1: A attacks B
    std::cout << "\nRound 1: A attacks B" << std::endl;
    a.attack("B");
    b.takeDamage(a.getAttackDamage());
    a.displayInfo();
    b.displayInfo();

    // Round 2: B attacks C
    std::cout << "\nRound 2: B attacks C" << std::endl;
    b.attack("C");
    c.takeDamage(b.getAttackDamage());
    b.displayInfo();
    c.displayInfo();

    // Round 3: C attacks A
    std::cout << "\nRound 3: C attacks A" << std::endl;
    c.attack("A");
    a.takeDamage(c.getAttackDamage());
    c.displayInfo();
    a.displayInfo();

    // Round 4: A repairs itself
    std::cout << "\nRound 4: A repairs itself" << std::endl;
    a.beRepaired(5);
    a.displayInfo();

    // Round 5: B repairs itself
    std::cout << "\nRound 5: B repairs itself" << std::endl;
    b.beRepaired(5);
    b.displayInfo();

    // Round 6: C repairs itself
    std::cout << "\nRound 6: C repairs itself" << std::endl;
    c.beRepaired(5);
    c.displayInfo();

    // Round 7: C activates guard mode
    std::cout << "\nRound 7: C activates guard mode" << std::endl;
    c.guardGate();
    c.displayInfo();

    return 0;
}