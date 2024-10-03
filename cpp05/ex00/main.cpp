# include "Bureaucrat.hpp"

int main( void )
{
    try
    {
        Bureaucrat abdu("Zabania", 0);
    }
    catch (const Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << "Caught an exception: " << e.what() << std::endl;
    }

    catch (const Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << "Caught an exception: " << e.what() << std::endl;
    }

    // std::cout << "Name = " << abdu.getName() << std::endl;
    // std::cout << "Grade = " << abdu.getGrade() << std::endl;
}
