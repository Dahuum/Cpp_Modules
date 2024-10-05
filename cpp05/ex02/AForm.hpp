#pragma once

# include "Bureaucrat.hpp"
class Bureaucrat;
class AForm {
  private:
    const std::string name;
    bool isSigned;
    const int GRADE_REQUIRED_TO_SIGN;
    const int GRADE_REQUIRED_TO_EXECUTE;
    mutable bool formStatus;

    public:
      AForm();
      AForm(const std::string name, int gradeToSign, int gradeToExecute);
      AForm(const AForm& other);
      virtual ~AForm();

      AForm& operator=(const AForm& other);

      class GradeTooHighException: public std::exception
      {
        public:
          const char* what() const throw();
      };

      class GradeTooLowException: public std::exception
      {
        public:
          const char* what() const throw();
      };

      class NotSignedException: public std::exception
      {
        public:
          const char* what() const throw();
      };

      // Getter for all attributes
      std::string getName() const;
      bool getSignStatus() const;
      int getGradeToSign() const;
      int getGradeToExecute() const;

      // Getter / Setter
      bool getFormStatus() const;
      void setFormStatus(bool status) const;

      // Sign Functions
      void beSigned(const Bureaucrat& other);

      // pure virtual function
      virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream& os, const AForm& F);