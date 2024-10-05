# include "Bureaucrat.hpp"
# include "Intern.hpp"


int main()
{
    Intern intern;
    Bureaucrat lowGrade("Intern", 150);
    Bureaucrat midGrade("Manager", 50);
    Bureaucrat highGrade("CEO", 1);

    // Test all valid form types
    AForm* shrubbery = intern.makeForm("ShrubberyCreationForm", "Garden");
    AForm* robotomy = intern.makeForm("RobotomyRequestForm", "Bender");
    AForm* pardon = intern.makeForm("PresidentialPardonForm", "Zaphod");

    // Test an invalid form type
    AForm* invalidForm = intern.makeForm("InvalidFormType", "Test");

    if (shrubbery)
    {
        std::cout << "\nTesting ShrubberyCreationForm:\n";
        std::cout << *shrubbery << std::endl;
        lowGrade.signForm(*shrubbery);  // Should fail
        midGrade.signForm(*shrubbery);  // Should succeed
        lowGrade.executeForm(*shrubbery);  // Should fail
        midGrade.executeForm(*shrubbery);  // Should succeed
        delete shrubbery;
    }

    if (robotomy)
    {
        std::cout << "\nTesting RobotomyRequestForm:\n";
        std::cout << *robotomy << std::endl;
        midGrade.signForm(*robotomy);  // Should succeed
        midGrade.executeForm(*robotomy);  // Should succeed
        delete robotomy;
    }

    if (pardon)
    {
        std::cout << "\nTesting PresidentialPardonForm:\n";
        std::cout << *pardon << std::endl;
        midGrade.signForm(*pardon);  // Should fail
        highGrade.signForm(*pardon);  // Should succeed
        midGrade.executeForm(*pardon);  // Should fail
        highGrade.executeForm(*pardon);  // Should succeed
        delete pardon;
    }

    // invalidForm should be NULL, so we don't need to delete it
    if (invalidForm == NULL) std::cout << "Yes it's NULL" << std::endl;

    return 0;
}