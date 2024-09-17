#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat") {
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat( std::string type ): WrongAnimal(type) {
    std::cout << "WrongCat type constructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat &other ): WrongAnimal(other) {
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator = ( const WrongCat &other ) {
    std::cout << "WrongCat assignation operator called" << std::endl;
    if (this != &other)
        WrongAnimal::operator=(other);
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "Meow Meow!" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
}