#include "Fixed.hpp"

Fixed::Fixed(): value(0) { std::cout << "Default constructor called" << std::endl; }

Fixed::Fixed(const Fixed& other){ this->value = other.value; std::cout << "Copy constructor called\n"; }

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) this->value = other.value;
    return *this;
}

int Fixed::getRawBits( void ) const {  std::cout << "getRawBits member function called\n"; return this->value; }
void Fixed::setRawBits( int const raw ) { this->value = raw; }

Fixed::~Fixed(){ std::cout << "Destructor called" << std::endl; }