#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

/*
    Animal (base class)
    |
    +--> Dog (derived from Animal, contains a Brain*)
    |
    +--> Cat (derived from Animal, contains a Brain*)

    Brain (separate class, not part of the inheritance hierarchy)
*/


#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
    std::cout << "--- Basic Animal Array Test ---" << std::endl;
    const int arraySize = 4;
    Animal* animals[arraySize];

    // Fill array with Dogs and Cats
    for (int i = 0; i < arraySize; i++) {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    // Delete all animals
    for (int i = 0; i < arraySize; i++) {
        delete animals[i];
    }

    std::cout << "\n--- Deep Copy Test ---" << std::endl;
    Dog* originalDog = new Dog();
    Dog* copiedDog = new Dog(*originalDog);

    delete originalDog;
    delete copiedDog;

    std::cout << "\n--- Assignment Operator Test ---" << std::endl;
    Dog dog1;
    Dog dog2;
    dog2 = dog1;

    std::cout << "\n--- Cat Tests ---" << std::endl;
    Cat* originalCat = new Cat();
    Cat* copiedCat = new Cat(*originalCat);

    delete originalCat;
    delete copiedCat;

    std::cout << "\n--- Polymorphism Test ---" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;
    delete i;

    return 0;
}