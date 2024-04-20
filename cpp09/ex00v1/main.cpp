#include  "BitcoinExchange.hpp"
#include "iostream"
#include <sstream>
#include <map>

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Usage: ./bitcoin [filename]" << std::endl;
        return 1;
    }
    return 0;
}