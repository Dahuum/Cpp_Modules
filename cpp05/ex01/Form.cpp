# include "Form.hpp"

Form::Form(): name("Default Form Name"), isSigned(false), GRADE_REQUIRED_TO_SIGN(1), GRADE_REQUIRED_TO_EXECUTE(1)
{
    std::cout << "Form: Default Constructor Called" << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade Too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade Too Low";
}