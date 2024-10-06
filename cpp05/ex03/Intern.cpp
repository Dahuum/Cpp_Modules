# include "Intern.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

AForm* Intern::createShrubberyForm(const std::string& target)
{
    return new ShrubberyCreationForm(target);
}

AForm* Intern::createRobotomyForm(const std::string& target)
{
    return new RobotomyRequestForm(target);
}

AForm* Intern::createPresidentialForm(const std::string& target)
{
    return new PresidentialPardonForm(target);
}

Intern::Intern()
{
    std::cout << "Intern: Default Constructor Called" << std::endl;
    funcAP[0] = &Intern::createShrubberyForm;
    funcAP[1] = &Intern::createRobotomyForm;
    funcAP[2] = &Intern::createPresidentialForm;
}

Intern::Intern(const Intern& other)
{
    std::cout << "Intern: Copy Constructor Called" << std::endl;
    *this = other;
}

Intern& Intern::operator=(const Intern& other)
{
    std::cout << "Intern: Copy Assignment Operator Called" << std::endl;
    if (this!= &other) *this = other;
    return *this;
}

Intern::~Intern()
{
    std::cout << "Intern: Destructor Called" << std::endl;
}


AForm* Intern::makeForm(std::string formName, std::string target)
{
    std::string forms[3] = {"Shrubbery request", "Robotomy request", "Presidential pardon"};
    size_t i;

    for (i = 0; i < 3; ++i) {
        if (formName == forms[i]) {
            std::cout << "Intern creates " << formName << std::endl;
            return (this->*funcAP[i])(target);
        }
    }

    std::cerr << "Form " << formName << " not found" << std::endl;
    return NULL;
}

