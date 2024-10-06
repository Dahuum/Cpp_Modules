# include "Form.hpp"

Form::Form(): name("Default Form Name"), isSigned(false), GRADE_REQUIRED_TO_SIGN(1), GRADE_REQUIRED_TO_EXECUTE(1)
{
    std::cout << "Form: Default Constructor Called" << std::endl;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade Too High";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade Too Low";
}

Form::Form(const std::string N, int gradeToSign, int gradeToExecute): name(N), isSigned(false), GRADE_REQUIRED_TO_SIGN(gradeToSign), GRADE_REQUIRED_TO_EXECUTE(gradeToExecute)
{
    std::cout << "Form: Parameterized Constructor Called" << std::endl;
    if (gradeToSign <= 0 || gradeToExecute <= 0) throw GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150) throw GradeTooLowException();
}

Form::Form(const Form& other): name(other.name), isSigned(other.isSigned), GRADE_REQUIRED_TO_SIGN(other.GRADE_REQUIRED_TO_SIGN), GRADE_REQUIRED_TO_EXECUTE(other.GRADE_REQUIRED_TO_EXECUTE)
{
    std::cout << "Form: Copy Constructor Called" << std::endl;
}

Form::~Form()
{
    std::cout << "Form: Destructor Called" << std::endl;
}

Form& Form::operator=(const Form& other)
{
    std::cout << "Form: Copy Assignment Operator Called" << std::endl;
    if (this != &other) this->isSigned = other.isSigned;
    return *this;
}

/* Getters */

std::string Form::getName() const
{
    return this->name;
}

bool Form::getSignStatus() const
{
    return this->isSigned;
}

int Form::getGradeToSign() const
{
    return this->GRADE_REQUIRED_TO_SIGN;
}
int Form::getGradeToExecute() const
{
    return this->GRADE_REQUIRED_TO_EXECUTE;
}

/* beSigned():  Checks if the grade is high enough to sign the form. */

void Form::beSigned(const Bureaucrat& other)
{
    if (other.getGrade() <= this->getGradeToSign() && this->isSigned == false) this->isSigned = true;
    else throw Form::GradeTooLowException();
}

/*Overloads << to print the form's name, sign status, and required grades.*/

std::ostream& operator<<(std::ostream& os, const Form& form)
{
    os << "Form: " << form.getName()
       << " | Signed: " << (form.getSignStatus() ? "Yes" : "No")
       << " | Grade Required to Sign: " << form.getGradeToSign()
       << " | Grade Required to Execute: " << form.getGradeToExecute();
    return os;
}

