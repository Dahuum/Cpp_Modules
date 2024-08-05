#include "Fixed.hpp"
#include <iostream>
#include <iomanip>

#define COMPARE(x, y, op) std::cout << #x << " (" << (x) << ") " #op " " << #y << " (" << (y) << ") : " \
                          << (((x) op (y)) ? "true" : "false") << std::endl

void testOverflowUnderflow() {
    std::cout << "\n=== Overflow and Underflow ===\n";
    Fixed max(32767); // Max positive value for 16-bit int
    Fixed min(-32768); // Min negative value for 16-bit int
    std::cout << "max (" << max << ") + 1 = " << (max + Fixed(1)) << " (Overflow check)\n";
    std::cout << "min (" << min << ") - 1 = " << (min - Fixed(1)) << " (Underflow check)\n";
}

void testPrecisionLoss() {
    std::cout << "\n=== Precision Loss ===\n";
    Fixed small(0.0001f);
    Fixed large(10000.0f);
    std::cout << "small (" << small << ") * large (" << large << ") = " << (small * large) << " (Precision loss check)\n";
}

void testComparisonEdgeCases() {
    std::cout << "\n=== Comparison Edge Cases ===\n";
    Fixed a(1.0f);
    Fixed b(1.00390625f); // Smallest representable value greater than 1 with 8 fractional bits
    COMPARE(a, b, ==);
    COMPARE(a, b, <);
    COMPARE(a, b, <=);
    COMPARE(a, b, >);
    COMPARE(a, b, >=);
    COMPARE(a, b, !=);
}

void testIncrementDecrementBoundaries() {
    std::cout << "\n=== Increment/Decrement at Boundaries ===\n";
    Fixed max(32767);
    Fixed min(-32768);
    std::cout << "++max: " << max << " -> " << (++max) << " (Increment at max check)\n";
    std::cout << "--min: " << min << " -> " << (--min) << " (Decrement at min check)\n";
}

void testConversionEdgeCases() {
    std::cout << "\n=== Conversion Edge Cases ===\n";
    Fixed maxInt(32767);
    Fixed minInt(-32768);
    std::cout << "maxInt (" << maxInt << ") to float: " << maxInt.toFloat() << "\n";
    std::cout << "minInt (" << minInt << ") to float: " << minInt.toFloat() << "\n";
    
    Fixed maxFloat(32767.99f);
    Fixed minFloat(-32768.0f);
    std::cout << "maxFloat (" << maxFloat << ") to int: " << maxFloat.toInt() << "\n";
    std::cout << "minFloat (" << minFloat << ") to int: " << minFloat.toInt() << "\n";
}

void testAssignmentEdgeCases() {
    std::cout << "\n=== Assignment Edge Cases ===\n";
    Fixed a;
    a = Fixed(32767.99f);
    std::cout << "Assigned max representable value: " << a << " (Expected close to 32767.99)\n";
    a = Fixed(-32768.0f);
    std::cout << "Assigned min representable value: " << a << " (Expected -32768)\n";
}

void testChainedOperations() {
    std::cout << "\n=== Chained Operations ===\n";
    Fixed a(10);
    Fixed b(3);
    Fixed c(2);
    std::cout << "((a (" << a << ") * b (" << b << ")) / c (" << c << ")) + a (" << a << ") - b (" << b << ") = "
              << (((a * b) / c) + a - b) << "\n";
}

void testArithmeticOperations() {
    std::cout << "\n=== Arithmetic Operations ===\n";
    
    Fixed a(10.5f);
    Fixed b(3.25f);
    
    // Addition
    std::cout << "Addition:\n";
    std::cout << "a (" << a << ") + b (" << b << ") = " << (a + b) << "\n";
    std::cout << "a (" << a << ") + 2 = " << (a + Fixed(2)) << "\n";
    
    // Subtraction
    std::cout << "\nSubtraction:\n";
    std::cout << "a (" << a << ") - b (" << b << ") = " << (a - b) << "\n";
    std::cout << "a (" << a << ") - 2 = " << (a - Fixed(2)) << "\n";
    
    // Multiplication
    std::cout << "\nMultiplication:\n";
    std::cout << "a (" << a << ") * b (" << b << ") = " << (a * b) << "\n";
    std::cout << "a (" << a << ") * 2 = " << (a * Fixed(2)) << "\n";
    
    // Division
    std::cout << "\nDivision:\n";
    std::cout << "a (" << a << ") / b (" << b << ") = " << (a / b) << "\n";
    std::cout << "a (" << a << ") / 2 = " << (a / Fixed(2)) << "\n";
    
    // Edge cases
    Fixed small(0.0001f);
    Fixed large(1000.0f);
    std::cout << "\nEdge cases:\n";
    std::cout << "small (" << small << ") * large (" << large << ") = " << (small * large) << "\n";
    std::cout << "large (" << large << ") / small (" << small << ") = " << (large / small) << "\n";
}

int main() {
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(8);
    
    testOverflowUnderflow();
    testPrecisionLoss();
    testComparisonEdgeCases();
    testIncrementDecrementBoundaries();
    testConversionEdgeCases();
    testAssignmentEdgeCases();
    testChainedOperations();
    testArithmeticOperations(); // New function added here
    
    return 0;
}