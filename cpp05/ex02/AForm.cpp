# include "AForm.hpp"

AForm::AForm(): name("Default AForm Name"), isSigned(false), GRADE_REQUIRED_TO_SIGN(1), GRADE_REQUIRED_TO_EXECUTE(1)
{
    std::cout << "AForm: Default Constructor Called" << std::endl;
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return "Grade Too High";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade Too Low";
}

const char* AForm::NotSignedException::what() const throw()
{
    return "Not Signed The Form";
}

AForm::AForm(const std::string N, int gradeToSign, int gradeToExecute): name(N), isSigned(false), GRADE_REQUIRED_TO_SIGN(gradeToSign), GRADE_REQUIRED_TO_EXECUTE(gradeToExecute)
{
    std::cout << "AForm: Parameterized Constructor Called" << std::endl;
    if (gradeToSign <= 0 || gradeToExecute <= 0) throw GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150) throw GradeTooLowException();
}

AForm::AForm(const AForm& other): name(other.name), isSigned(other.isSigned), GRADE_REQUIRED_TO_SIGN(other.GRADE_REQUIRED_TO_SIGN), GRADE_REQUIRED_TO_EXECUTE(other.GRADE_REQUIRED_TO_EXECUTE)
{
    std::cout << "AForm: Copy Constructor Called" << std::endl;
}

AForm::~AForm()
{
    std::cout << "AForm: Destructor Called" << std::endl;
}

AForm& AForm::operator=(const AForm& other)
{
    std::cout << "AForm: Copy Assignment Operator Called" << std::endl;
    if (this != &other) this->isSigned = other.isSigned;
    return *this;
}

/* Getters */

std::string AForm::getName() const
{
    return this->name;
}

bool AForm::getSignStatus() const
{
    return this->isSigned;
}

int AForm::getGradeToSign() const
{
    return this->GRADE_REQUIRED_TO_SIGN;
}
int AForm::getGradeToExecute() const
{
    return this->GRADE_REQUIRED_TO_EXECUTE;
}

/* beSigned():  Checks if the grade is high enough to sign the aForm. */

void AForm::beSigned(const Bureaucrat& other)
{
    std::cout << "Other Grade: " << other.getGrade() << std::endl;
    std::cout << "This Grade: " << this->getGradeToSign() << std::endl;
    if (other.getGrade() <= this->getGradeToSign()) this->isSigned = true;
    else throw AForm::GradeTooLowException();
}

/*Overloads << to print the aForm's name, sign status, and required grades.*/

std::ostream& operator<<(std::ostream& os, const AForm& aForm)
{
    os << "AForm: " << aForm.getName()
       << " | Signed: " << (aForm.getSignStatus() ? "Yes" : "No")
       << " | Grade Required to Sign: " << aForm.getGradeToSign()
       << " | Grade Required to Execute: " << aForm.getGradeToExecute();
    return os;
}

