#pragma once

# include <iostream>
# include <string.h>
# include <cstdbool>

class Bureaucrat {
    private:
        const std::string name;
        int grade;

    public:
        Bureaucrat();
        Bureaucrat(const std::string N, int G);
        Bureaucrat(const Bureaucrat& other);
        Bureaucrat& operator=(const Bureaucrat& other);
        virtual ~Bureaucrat();

        class GradeTooHighException: public std::exception  {
            public:
                const char* what() const throw();
        };

        class GradeTooLowException: public std::exception  {
            public:
                const char* what() const throw();
        };

        std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();

};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);