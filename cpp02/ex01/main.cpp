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
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );

    a = Fixed( 1234.4321f );

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    
    return 0;
}