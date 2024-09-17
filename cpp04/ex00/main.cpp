#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"

int main()
{
    // Normal tests
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    
    // Wrong tests
    const WrongAnimal* a = new WrongAnimal();
    const WrongAnimal* b = new WrongCat();

    std::cout << a->getType() << " " << std::endl;
    a->makeSound();
    b->makeSound();
    std::cout << "Did you notice the error in the output?" << std::endl;
    
    
    
    delete meta;
    delete j;
    delete i;
    delete a;
    delete b;
    return 0;
}