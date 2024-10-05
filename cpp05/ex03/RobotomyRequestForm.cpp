# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("Robotomy Request Form", 72, 45)
{
    std::cout << "RobotomyRequestForm: Default Constructor Called" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(const std::string target): AForm(target, 72, 45)
{
    std::cout << "RobotomyRequestForm: Parameterized Constructor Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other): AForm(other)
{
    std::cout << "RobotomyRequestForm: Copy Constructor Called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    std::cout << "RobotomyRequestForm: Copy Assignment Operator Called" << std::endl;
    if (this != &other)
      AForm::operator=(other);
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm: Destructor Called" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
  if (this->getSignStatus() == false) throw AForm::NotSignedException();
  if (executor.getGrade() > this->getGradeToSign()) throw AForm::GradeTooLowException();

  this->setFormStatus(true);
  std::cout << "Drilling noises" << std::endl;
  if (rand() % 2 == 0)
    std::cout << this->getName() << " has been robotomized successfully" << std::endl;
  else
    std::cout << this->getName() << " has failed to be robotomized" << std::endl;
}