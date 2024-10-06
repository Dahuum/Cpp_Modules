# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Shrubbery Creation Form", 145, 137)
{
    std::cout << "ShrubberyCreationForm: Default Constructor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target): AForm(target, 145, 137)
{
    std::cout << "ShrubberyCreationForm: Parameterized Constructor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other): AForm(other)
{
    std::cout << "ShrubberyCreationForm: Copy Constructor Called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    std::cout << "ShrubberyCreationForm: Copy Assignment Operator Called" << std::endl;
    if (this != &other)
      AForm::operator=(other);
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm: Destructor Called" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
  if (this->getSignStatus() == false) throw AForm::NotSignedException();
  if (executor.getGrade() > this->getGradeToSign()) throw AForm::GradeTooLowException();

  std::ofstream file((this->getName() + "_shrubbery").c_str());
  if (!file.is_open())
  {
    std::cerr << "Error: Could not open file" << std::endl;
    return ;
  }

    file << "          .     .  .      +     .      .          .\n";
    file << "     .       .      .     #       .           .\n";
    file << "        .      .         ###            .      .      .\n";
    file << "      .      .   \"#:. .:##\"##:. .:#\"  .      .\n";
    file << "          .      . \"####\"###\"####\"  .\n";
    file << "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n";
    file << "  .             \"#########\"#########\"        .        .\n";
    file << "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n";
    file << "     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n";
    file << "                .\"##\"####\"####\"##\"           .      .\n";
    file << "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n";
    file << "      .     \"#######\"##\"#######\"##\"#######\"      .     .\n";
    file << "    .    .     \"#####\"\"#######\"\"#####\"    .      .\n";
    file << "            .     \"      000      \"    .     .\n";
    file << "       .         .   .   000     .        .       .\n";
    file << ".. .. ..................O000O........................ ......\n";

  this->setFormStatus(true);
  file.close();
}
