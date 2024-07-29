#include "Harl.hpp"

int main( int ac, char *av[] )
{
    Harl h;

    if (ac != 2)
    {
        std::cout << "Usage: ./harlFilter <log level>" << std::endl;
        return 1;
    }
    h.harlFilter(av[1]);
}