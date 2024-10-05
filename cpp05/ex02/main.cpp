#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main()
{
    try {
        // Create bureaucrats
        Bureaucrat lowGrade("Intern", 150);
        Bureaucrat midGrade("Manager", 50);
        Bureaucrat highGrade("CEO", 1);

        // Create forms
        ShrubberyCreationForm shrubForm("Garden");
        RobotomyRequestForm robotForm("Bender");
        PresidentialPardonForm pardonForm("Zaphod");

        std::cout << "\n--- Testing ShrubberyCreationForm ---\n";
        std::cout << shrubForm << std::endl;
        lowGrade.signForm(shrubForm);
        midGrade.signForm(shrubForm);
        lowGrade.executeForm(shrubForm);
        midGrade.executeForm(shrubForm);

        std::cout << "\n--- Testing RobotomyRequestForm ---\n";
        std::cout << robotForm << std::endl;
        midGrade.signForm(robotForm);
        midGrade.executeForm(robotForm);
        highGrade.executeForm(robotForm);

        std::cout << "\n--- Testing PresidentialPardonForm ---\n";
        std::cout << pardonForm << std::endl;
        highGrade.signForm(pardonForm);
        midGrade.executeForm(pardonForm);
        highGrade.executeForm(pardonForm);

    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}