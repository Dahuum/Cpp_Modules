#include "Fixed.hpp"

Fixed::Fixed(): value(0) { std::cout << "Default constructor called" << std::endl; }

Fixed::Fixed(const Fixed& other)
{ 
    std::cout << "Copy constructor called\n";
    *this = other;
}

Fixed::Fixed(int v)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = v * (1 << Fixed::bits);
}

Fixed::Fixed(float a)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = (int)roundf(a * (1 << Fixed::bits));
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) this->setRawBits(other.getRawBits());
    return *this;
}

int Fixed::getRawBits( void ) const { return this->value; }
void Fixed::setRawBits( int const raw ) { this->value = raw; }


int Fixed::toInt( void ) const {
    return this->value / (1 << Fixed::bits);
    // i should get the idea about this ( return this->value >> this->bits )
}

float Fixed::toFloat( void ) const {
    return (float)(this->value) / (float)(1 << Fixed::bits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}

Fixed::~Fixed(){ std::cout << "Destructor called" << std::endl; }