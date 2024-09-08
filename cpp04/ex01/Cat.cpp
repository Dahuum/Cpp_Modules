#include "Cat.hpp"

Cat::Cat(): Animal() {
    std::cout << "Cat default constructor called" << std::endl;
    this->brain = new Brain();
}

Cat::Cat( const Cat &other ): Animal(other) {
    std::cout << "Cat copy constructor called" << std::endl;
    this->brain = new Brain();
    *this = other;
}

Cat &Cat::operator = ( const Cat &other ) {
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &other) {
        Animal::operator=(other);
        delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Meow Meow!" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
}