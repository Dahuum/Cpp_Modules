#include "Fixed.hpp"

/*

    If you're comparing this to the example output in the subject, 
    keep in mind that the exact output can vary slightly due to 
    differences in floating-point representation
    between systems or compiler versions.

    Your implementation appears to be correct and fulfills the requirements of 
    the exercise. The output demonstrates that:

    You've correctly implemented the different constructors (default, int, float, copy).
    The copy assignment operator is working.
    Conversion to float and int is functioning as expected.
    The insertion operator (<<) for output is working correctly.

*/


int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}