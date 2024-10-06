# pragma once

# include "AForm.hpp"
# include <fstream>
#include <cstdlib>


class RobotomyRequestForm: public AForm
{
  public:
    RobotomyRequestForm();
    RobotomyRequestForm(const std::string target);
    RobotomyRequestForm(const RobotomyRequestForm& other);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
    ~RobotomyRequestForm();

  void execute(Bureaucrat const & executor) const;

};