# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("Default Name"), grade(0) 
{
    std::cout << "Bureaucrat Default Constructor Called" << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade Too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade Too Low";
}

Bureaucrat::Bureaucrat(std::string N, int G): name(N)
{
    std::cout << "Bureaucrat Parameterized Constructor Called" << std::endl;
    if (grade < 1) throw GradeTooHighException();
    else if (grade > 150) throw GradeTooLowException();
    this->grade = G;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
    std::cout << "Bureaucrat Copy Constructor Called" << std::endl;
    *this = other;
}

Bureaucrat& operator=(const Bureaucrat& other)
{
    std::cout << "Bureaucrat Copy Assignment Operator Called" << std::endl;
    if (this != &other)
    {
        this->grade = other.grade;
        this->name = other.name;
    }
    return *this;
}

std::string Bureaucrat::getName() { return this->name; }
int Bureaucrat::getGrade() {return this->grade; }

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor Called" << std::endl;
}
