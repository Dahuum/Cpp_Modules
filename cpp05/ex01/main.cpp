# include "Bureaucrat.hpp"

int main( void )
{
    try
    {
        Bureaucrat a("Yahya", 2);
        Bureaucrat b("Void", 30);
        Form F("Having YZ450F", 5, 5);

        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << F << std::endl;
        a.signForm(F);
        b.signForm(F);
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << F << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
}
