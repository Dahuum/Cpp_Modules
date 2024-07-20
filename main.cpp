#include <iostream>
#include <iomanip>
template <class T>


inline void swap(T& i, T& j)
{
    T tmp = i;
    i = j;
    j = tmp;
}


int main(void)
{
    int number;
    std::string name = "Abdurrahman";
    std::string nickname = "48k483x";
    std::cout << "How old are you : ";
    std::cin >> number;
    std::cout << "My age is : " << number << "\n";
    std::cout << "hello world yes it's me " << name << "and my nick is " << nickname << std::endl;

    int x = 5; int y = 10;
    double i = 5.0; double j = 10.0;
    
    std::cout << "x = " << x << " and y = " << y << std::endl;
    swap(x, y);
    std::cout << "x = " << x << " and y = " << y << std::endl;

    std::cout << "i = " << std::fixed << std::setprecision(2) << i << " and j = " << std::fixed << std::setprecision(2) << j << std::endl;
    swap(i, j);
    std::cout << "i = " << std::fixed << std::setprecision(2) << i << " and j = " << std::fixed << std::setprecision(2) << j << std::endl;
}