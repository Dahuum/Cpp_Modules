# include "Bureaucrat.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern& other);
        Intern& operator=(const Intern& other);
        ~Intern();

        AForm* makeForm(std::string formName, std::string target);

    private:

        typedef AForm* (Intern::*FormCreator)(const std::string&);
        FormCreator funcAP[3];

        AForm* createShrubberyForm(const std::string& target);
        AForm* createRobotomyForm(const std::string& target);
        AForm* createPresidentialForm(const std::string& target);
};