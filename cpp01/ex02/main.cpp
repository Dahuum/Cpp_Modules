#include <iostream>

int main() 
{
    std::string string = "HI THIS IS BRAIN";
    std::string* stringPTR = &string;
    std::string& stringREF = string;

    // ANSI escape codes for colors
    const std::string R = "\033[0m";
    const std::string Y = "\033[1;33m";


    std::cout << Y << "Memory address of string variable: " << &string << R << std::endl;
    std::cout << Y << "Memory address held by  stringPTR: " << stringPTR << R << std::endl;
    std::cout << Y << "Memory address held by  stringREF: " << &stringREF << R << std::endl;
    // New Line
    std::cout << std::endl;
    // Second Part Of the ass...;
    std::cout << Y << "Value of string      variable: " << string << R << std::endl;
    std::cout << Y << "Value pointed to by stringPTR: " << *stringPTR << R << std::endl;
    std::cout << Y << "Value pointed to by stringREF: " << stringREF << R << std::endl;

    return 0;
}