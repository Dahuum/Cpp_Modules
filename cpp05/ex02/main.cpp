# include "ShrubberyCreationForm.hpp"

int main( void )
{
  try
  {
    Bureaucrat a("A", 1);
    Bureaucrat b("B", 100);

    ShrubberyCreationForm s("VoidMe");
    a.signForm(s);
    b.signForm(s);
    s.execute(a);
    s.execute(b);

  }
  catch (const std::exception& e)
  {
    std::cout << "Exception caught: " << e.what() << "\n";
  }
}