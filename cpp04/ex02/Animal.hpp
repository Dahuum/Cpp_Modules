#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        Animal( const Animal &other );
        Animal &operator = ( const Animal &other );
        virtual ~Animal();

        /*
          = 0 like it says 
          |
          +--> "this function has no implementation here"
          |
          +--> "it must be implemented in the derived classes"
          |
          +--> "A pure virtual makeSound() makes Animal abstract and uninstantiable."
           |
            +--> "this is a pure virtual function"
        */
        virtual void makeSound() const = 0;
        std::string getType() const;
};

#endif