#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed {
    private:
        int value;
        static const int bits = 8;
    public:

        // Constructors and destructor
        Fixed();
        Fixed( int v );
        Fixed( float a );
        Fixed( const Fixed& other );
        ~Fixed();

        // Assignment operator
        Fixed& operator=( const Fixed& other );

        // Comparison operators
        bool operator<( const Fixed& other ) const;
        bool operator>( const Fixed& other ) const;
        bool operator>=( const Fixed& other ) const;
        bool operator<=( const Fixed& other ) const;
        bool operator==( const Fixed& other ) const;
        bool operator!=( const Fixed& other ) const;

        // Arithmetic operations
        Fixed operator+( const Fixed& other ) const;
        Fixed operator-( const Fixed& other ) const;
        Fixed operator*( const Fixed& other ) const;
        Fixed operator/( const Fixed& other ) const;

        // Increment operations
        Fixed& operator++();
        Fixed operator++( int );
        Fixed& operator--();
        Fixed operator--( int );

        // New Static functions
        static Fixed& min(Fixed &a, Fixed &b);
        static const Fixed& min(const Fixed &a, const Fixed &b);
        static Fixed& max(Fixed &a, Fixed &b);
        static const Fixed& max(const Fixed &a, const Fixed &b);

        // Old member functions
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        int toInt( void ) const;
        float toFloat( void ) const;
};
// Stream insertion operator (from ex01)
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif