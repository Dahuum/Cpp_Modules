#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {
    private:
        std::string type;
    public:
        Animal();
        Animal( std::string type );
        Animal( const Animal &other );
        Animal &operator = ( const Animal &other );
        
    /*
        Virtual Destructor
        |
        +--> Ensures proper destructor calls in derived classesd
    */
        virtual ~Animal();

        virtual void makeSound() const;
        std::string getType() const;
};

#endif