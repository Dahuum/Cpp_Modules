# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("Presidential Pardon Form", 25, 5)
{
    std::cout << "PresidentialPardonForm: Default Constructor Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target): AForm(target, 25, 5)
{
    std::cout << "PresidentialPardonForm: Parameterized Constructor Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other): AForm(other)
{
    std::cout << "PresidentialPardonForm: Copy Constructor Called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    std::cout << "PresidentialPardonForm: Copy Assignment Operator Called" << std::endl;
    if (this != &other)
      AForm::operator=(other);
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm: Destructor Called" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
  if (this->getSignStatus() == false) throw AForm::NotSignedException();
  if (executor.getGrade() > this->getGradeToSign()) throw AForm::GradeTooLowException();

  this->setFormStatus(true);
  std::cout << this->getName() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}