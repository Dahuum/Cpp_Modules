#pragma once

# include "Bureaucrat.hpp"

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
      const std::string getName();
      bool getSignStatus();
      const int getGradeToSign();
      const int getGradeToExecute();

      // Sign Functions
      void beSigned(const Bureaucrat& other);
      void signForm();
};