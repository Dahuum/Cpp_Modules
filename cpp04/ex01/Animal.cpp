#include "Animal.hpp"

Animal::Animal(): type("Unknown") {
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal( std::string type ): type(type) {
    std::cout << "Animal type constructor called" << std::endl;
}

Animal::Animal( const Animal &other ): type(other.type) {
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator = ( const Animal &other ) {
    std::cout << "Animal assignation operator called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

std::string Animal::getType() const {
    return this->type;
}

void Animal::makeSound() const {
    std::cout << "Animal sound" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}