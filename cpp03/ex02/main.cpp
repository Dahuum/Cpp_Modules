#include "FragTrap.hpp"
#include <iostream>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

int main(void)
{
    // Create FragTrap instances
    FragTrap frag1;
    FragTrap frag2;
    FragTrap frag3;

    // Set names using setName
    frag1.setName("Frag1");
    frag2.setName("Frag2");
    frag3.setName("Frag3");

    // Display initial info
    std::cout << WHITE << "Initial States:" << RESET << std::endl;
    frag1.displayInfo();
    frag2.displayInfo();
    frag3.displayInfo();

    // Round 1: Frag1 attacks Frag2
    std::cout << RED << "\nRound 1: Frag1 attacks Frag2" << RESET << std::endl;
    frag1.attack("Frag2");
    frag2.takeDamage(frag1.getAttackDamage());
    frag1.displayInfo();
    frag2.displayInfo();

    // Round 2: Frag2 attacks Frag3
    std::cout << GREEN << "\nRound 2: Frag2 attacks Frag3" << RESET << std::endl;
    frag2.attack("Frag3");
    frag3.takeDamage(frag2.getAttackDamage());
    frag2.displayInfo();
    frag3.displayInfo();

    // Round 3: Frag3 attacks Frag1
    std::cout << YELLOW << "\nRound 3: Frag3 attacks Frag1" << RESET << std::endl;
    frag3.attack("Frag1");
    frag1.takeDamage(frag3.getAttackDamage());
    frag3.displayInfo();
    frag1.displayInfo();

    // Round 4: Frag1 repairs itself
    std::cout << BLUE << "\nRound 4: Frag1 repairs itself" << RESET << std::endl;
    frag1.beRepaired(10);
    frag1.displayInfo();

    // Round 5: Frag2 repairs itself
    std::cout << MAGENTA << "\nRound 5: Frag2 repairs itself" << RESET << std::endl;
    frag2.beRepaired(10);
    frag2.displayInfo();

    // Round 6: Frag3 repairs itself
    std::cout << CYAN << "\nRound 6: Frag3 repairs itself" << RESET << std::endl;
    frag3.beRepaired(10);
    frag3.displayInfo();

    // Round 7: Frag1 runs out of energy and tries to attack
    std::cout << RED << "\nRound 7: Frag1 runs out of energy and tries to attack" << RESET << std::endl;
    for (int i = 0; i < 10; ++i) {
        frag1.attack("Frag2");
        frag2.takeDamage(frag1.getAttackDamage());
        frag1.displayInfo();
        frag2.displayInfo();
    }
    frag1.displayInfo();
    frag2.displayInfo();

    // Round 8: Frag2 and Frag3 high five
    std::cout << GREEN << "\nRound 8: Frag2 and Frag3 high five" << RESET << std::endl;
    frag2.highFivesGuys();
    frag3.highFivesGuys();

    // Final States
    std::cout << WHITE << "\nFinal States:" << RESET << std::endl;
    frag1.displayInfo();
    frag2.displayInfo();
    frag3.displayInfo();

    return 0;
}