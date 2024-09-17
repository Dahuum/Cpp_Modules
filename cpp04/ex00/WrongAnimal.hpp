# pragma once

# include <iostream>
# include <string>

class WrongAnimal {
    private:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal( std::string type );
        WrongAnimal( const WrongAnimal &other );
        WrongAnimal &operator = ( const WrongAnimal &other );
        
    /*
        Virtual Destructor
        |
        +--> Ensures proper destructor calls in derived classesd
    */
        virtual ~WrongAnimal();

        void makeSound() const;
        std::string getType() const;
};
