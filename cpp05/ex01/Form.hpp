#pragma once

# include "Bureaucrat.hpp"
class Bureaucrat;
class Form {
  private:
    const std::string name;
    bool isSigned;
    const int GRADE_REQUIRED_TO_SIGN;
    const int GRADE_REQUIRED_TO_EXECUTE;

    public:
      Form();
      Form(const std::string name, int gradeToSign, int gradeToExecute);
      Form(const Form& other);
      ~Form();

      Form& operator=(const Form& other);

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

      // Getter for all attributes
      std::string getName() const;
      bool getSignStatus() const;
      int getGradeToSign() const;
      int getGradeToExecute() const;

      // Sign Functions
      void beSigned(const Bureaucrat& other);
};

std::ostream& operator<<(std::ostream& os, const Form& F);