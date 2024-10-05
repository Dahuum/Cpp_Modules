#pragma once

# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm: public AForm
{
  private:
    int sign;
    int exec;

  public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm& other);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
    ~ShrubberyCreationForm();

  void execute(Bureaucrat const & executor) const;

};