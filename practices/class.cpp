#include <iostream>

class Car
{
    private:
        int year;
        std::string modele;
    public:
        // This the default constructor if no data was entered;
        Car(): year(2024), modele("Unkown"){}
        
        Car (int y, std::string m): year(y), modele(m){}

        void show() {std::cout << year << " " << modele << " " << std::endl;}
        void update_year(int NewYear) {year = NewYear;}
        int  get_year() {return year;}
};

int main(void)
{
    Car car1;
    Car carr(2024, "Tesla");

    car1.show();
    carr.show();
    carr.update_year(carr.get_year() + 1);
    carr.show();

}

