#include "DiamondTrap.hpp"

/* 
            ClapTrap
             /    \
        ScavTrap  FragTrap
            \    /
        DiamondTrap
*/

#include "DiamondTrap.hpp"
#include <iostream>

#include "DiamondTrap.hpp"
#include <iostream>

int main() {
    std::cout << "==== DIAMONDTRAP TESTS BEGIN ====\n" << std::endl;

    // Basic creation and name tests
    DiamondTrap dt("Diamondy");
    dt.displayInfo(); // Should display initial info (name, hit points, etc.)

    // Test attack (inherited from ScavTrap)
    dt.attack("TargetDummy");

    // Test special ability whoAmI
    std::cout << "\n-- Testing whoAmI() --" << std::endl;
    dt.whoAmI(); // Should display both DiamondTrap name and ClapTrap name

    // Test taking damage and repair
    std::cout << "\n-- Taking Damage and Repair --" << std::endl;
    dt.takeDamage(50);  // Reduces hit points
    dt.beRepaired(30);  // Restores hit points
    dt.displayInfo();    // Display current state

    // Test inheritance of abilities from FragTrap and ScavTrap
    std::cout << "\n-- Testing Special Abilities --" << std::endl;
    dt.highFivesGuys(); // FragTrap ability
    dt.guardGate();     // ScavTrap ability

    // Test name shadowing and ClapTrap::name
    std::cout << "\n-- Testing name shadowing --" << std::endl;
    DiamondTrap shadowTest("Shadowy");
    shadowTest.whoAmI(); // Should display DiamondTrap's name and ClapTrap's name

    std::cout << "\n==== DIAMONDTRAP TESTS END ====\n" << std::endl;
    return 0;
}
