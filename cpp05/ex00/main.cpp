# include "Bureaucrat.hpp"

void testBureaucrat(const std::string& name, int grade) {
    try {
        Bureaucrat b(name, grade);
        std::cout << b << std::endl;
        b.incrementGrade();
        std::cout << "After increment: " << b << std::endl;
        b.decrementGrade();
        std::cout << "After decrement: " << b << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
}

int main()
{
    std::cout << "Testing valid bureaucrat:" << std::endl;
    testBureaucrat("John", 75);

    std::cout << "\nTesting grade too high:" << std::endl;
    testBureaucrat("Alice", 0);

    std::cout << "\nTesting grade too low:" << std::endl;
    testBureaucrat("Bob", 151);

    std::cout << "\nTesting increment at grade 1:" << std::endl;
    testBureaucrat("Charlie", 1);

    std::cout << "\nTesting decrement at grade 150:" << std::endl;
    testBureaucrat("David", 150);

    return 0;
}
