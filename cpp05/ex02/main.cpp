# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int main( void )
{
  try
  {
    Bureaucrat a("A", 1);
    Bureaucrat b("B", 100);
    Bureaucrat c("C", 150);

    RobotomyRequestForm s("VoidMe");
    ShrubberyCreationForm t("TreeMe");
    PresidentialPardonForm u("PardonMe");
    a.signForm(s);
    b.signForm(s);
    c.signForm(s);
  }
  catch (const std::exception& e)
  {
    std::cout << "Exception caught: " << e.what() << "\n";
  }
}