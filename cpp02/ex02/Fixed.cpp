#include "Fixed.hpp"

Fixed::Fixed(): value(0) {}

Fixed::Fixed(const Fixed& other)
{ 
    // std::cout << "Copy constructor called\n";
    *this = other;
}

Fixed::Fixed(int v)
{
    // std::cout << "Int constructor called" << std::endl;
    this->value = v * (1 << Fixed::bits);
}

Fixed::Fixed(float a)
{
    // std::cout << "Float constructor called" << std::endl;
    this->value = (int)roundf(a * (1 << Fixed::bits));
}

Fixed& Fixed::operator=(const Fixed& other)
{
    // std::cout << "Copy assignment operator called" << std::endl;
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

// Comparison operators

bool Fixed::operator<( const Fixed& other ) const {
    return this->getRawBits() < other.getRawBits();
}

bool Fixed::operator>( const Fixed& other ) const {
    return this->getRawBits() > other.getRawBits();
}

bool Fixed::operator<=( const Fixed& other ) const {
    return this->getRawBits() <= other.getRawBits();
}

bool Fixed::operator>=( const Fixed& other ) const {
    return this->getRawBits() >= other.getRawBits();
}

bool Fixed::operator==( const Fixed& other ) const {
    return this->getRawBits() == other.getRawBits();
}

bool Fixed::operator!=( const Fixed& other ) const {
    return this->getRawBits() != other.getRawBits();
}

// Arithmetic operations

Fixed Fixed::operator+( const Fixed& other ) const {
    Fixed result;
    result.setRawBits((this->getRawBits() + other.getRawBits()) );
    return result;
}

Fixed Fixed::operator-( const Fixed& other ) const {
    Fixed result;
    result.setRawBits((this->getRawBits() - other.getRawBits()) );
    return result;
}

Fixed Fixed::operator*( const Fixed& other ) const {
    Fixed result;
    result.setRawBits((this->getRawBits() * other.getRawBits()) >> Fixed::bits);
    return result;
}


Fixed Fixed::operator/( const Fixed& other ) const {
    if (other.getRawBits() == 0)
    {
        std::cerr << "Division by zero or near-zero value" << std::endl;
        return Fixed(0);
    }
    Fixed result;
    result.setRawBits((this->getRawBits() << Fixed::bits) / other.getRawBits() );
    return result;
}

// Increment operations
/* 
    int main ( void ) 
    {
        int a = 5;
        int b = a++;
        printf("a = %d\n", a); // a = 6;
        printf("b = %d\n", b); // b = 5;
    }
*/
Fixed& Fixed::operator++() {
    this->value += 1;
    return *this;
}

Fixed& Fixed::operator--() {
    this->value -= 1;
    return *this;
}

Fixed Fixed::operator++( int ) {
    Fixed tmp(*this);
    ++(*this);
    return tmp;
}

Fixed Fixed::operator--( int ) {
    Fixed tmp(*this);
    --(*this);
    return tmp;
}

// New Static functions
Fixed& Fixed::min( Fixed &a, Fixed &b ){
    return (a < b) ? a : b;
}

Fixed& Fixed::max( Fixed &a, Fixed &b ){
    return (a > b) ? a : b;
}

const Fixed& Fixed::min( const Fixed &a, const Fixed &b ){
    return (a < b) ? a : b;
}

const Fixed& Fixed::max( const Fixed &a, const Fixed &b ){
    return (a > b) ? a : b;
}




Fixed::~Fixed(){}