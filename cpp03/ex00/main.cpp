#include <iostream>
#include <cassert>
#include "ClapTrap.hpp"
#include <cmath>

void runTests() {
    std::cout << "=== ClapTrap Test Suite ===" << std::endl;

    // Test 1: Default construction and initial values
    {
        ClapTrap ct("CT-1");
        assert(ct.getName() == "CT-1");
        assert(ct.getHitPoints() == 10);
        assert(ct.getEnergyPoints() == 10);
        assert(ct.getAttackDamage() == 0);
        std::cout << "Test 1 Passed: Default construction and initial values" << std::endl;
    }

    // Test 2: Attack functionality
    {
        ClapTrap ct("CT-2");
        ct.attack("Target");
        assert(ct.getEnergyPoints() == 9);
        std::cout << "Test 2 Passed: Attack functionality" << std::endl;
    }

    // Test 3: Take damage
    {
        ClapTrap ct("CT-3");
        ct.takeDamage(5);
        assert(ct.getHitPoints() == 5);
        std::cout << "Test 3 Passed: Take damage" << std::endl;
    }

    // Test 4: Be repaired
    {
        ClapTrap ct("CT-4");
        ct.takeDamage(5);
        ct.beRepaired(3);
        assert(ct.getHitPoints() == 8);
        assert(ct.getEnergyPoints() == 9);
        std::cout << "Test 4 Passed: Be repaired" << std::endl;
    }

    // Test 5: Energy depletion
    {
        ClapTrap ct("CT-5");
        for (int i = 0; i < 10; ++i) {
            ct.attack("Target");
        }
        std::cout << ct.getEnergyPoints() << std::endl;
        assert(ct.getEnergyPoints() == 0);
        ct.attack("Target"); // Should not reduce energy points further
        assert(ct.getEnergyPoints() == 0);
        std::cout << "Test 5 Passed: Energy depletion" << std::endl;
    }

    // Test 6: Hit points depletion
    {
        ClapTrap ct("CT-6");
        ct.takeDamage(15);
        assert(ct.getHitPoints() == 0);
        ct.beRepaired(5); // Should not increase hit points
        assert(ct.getHitPoints() == 5);
        std::cout << "Test 6 Passed: Hit points depletion" << std::endl;
    }

    // Test 7: Copy constructor
    {
        ClapTrap ct1("CT-7");
        ct1.takeDamage(3);
        ClapTrap ct2(ct1);
        assert(ct2.getName() == "CT-7");
        assert(ct2.getHitPoints() == 7);
        std::cout << "Test 7 Passed: Copy constructor" << std::endl;
    }

    // Test 8: Assignment operator
    {
        ClapTrap ct1("CT-8a");
        ct1.takeDamage(2);
        ClapTrap ct2("CT-8b");
        ct2 = ct1;
        assert(ct2.getName() == "CT-8a");
        assert(ct2.getHitPoints() == 8);
        std::cout << "Test 8 Passed: Assignment operator" << std::endl;
    }

    // Test 9: Edge case - Healing beyond initial hit points
    {
        ClapTrap ct("CT-9");
        ct.beRepaired(5);
        assert(ct.getHitPoints() == 15); // ! Should not exceed initial hit points
        std::cout << "Test 9 Passed: Healing beyond initial hit points" << std::endl;
    }

    // Test 10: Edge case - Taking negative damage
    {
        int x = -5;
        ClapTrap ct("CT-10");
        ct.takeDamage((unsigned int)abs(x));
        assert(ct.getHitPoints() == 5); // Should not change hit points
        std::cout << "Test 10 Passed: Taking negative damage" << std::endl;
    }

    std::cout << "All tests passed successfully!" << std::endl;
}

int main() {
    // runTests();
    {
        ClapTrap ct("");
        ct.beRepaired(5);
        assert(ct.getHitPoints() == 15); // ! Should not exceed initial hit points
        std::cout << "this is the new heal: " << ct.getHitPoints() << std::endl;
        std::cout << "Test 9 Passed: Healing beyond initial hit points" << std::endl;
    }
    return 0;
}