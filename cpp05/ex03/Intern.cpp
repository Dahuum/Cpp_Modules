# include "Intern.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

Intern::Intern()
{
    std::cout << "Intern: Default Constructor Called" << std::endl;
}

// Intern::Intern(const Intern& other)
// {
//     std::cout << "Intern: Copy Constructor Called" << std::endl;
// }

// Intern& Intern::operator=(const Intern& other)
// {
//     std::cout << "Intern: Copy Assignment Operator Called" << std::endl;
//     return *this;
// }

Intern::~Intern()
{
    std::cout << "Intern: Destructor Called" << std::endl;
}

AForm* Intern::makeForm(std::string formName, std::string target)
{
  AForm* form = NULL;
  std::string formNames[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
  int i = -1;

  while (++i < 3)
  {
    if (formName == formNames[i])
    {
      switch(i)
      {
        case 0:
          form = new ShrubberyCreationForm(target);
          break;
        case 1:
          form = new RobotomyRequestForm(target);
          break;
        case 2:
          form = new PresidentialPardonForm(target);
          break;
        default:
          break;
      }
      break;
    }
  }
  if (form)
    std::cout << "Form " << formName << " created" << std::endl;
  else
    std::cerr << "Form " << formName << " not found" << std::endl;
  return form;
}

