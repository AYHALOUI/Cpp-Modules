#include "ScalarConverter.hpp"


int main (int ac, char **av)
{
    (void)av;
    (void)ac;
    // try
    // {
    //     if (ac != 2)
    //         throw std::invalid_argument("Number of args are not Valid");
    //     ScalarConverter::convert(av[1]);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    double b = atof(av[1]);
    std::cout << b << std::endl;
    std::cout << static_cast<double>(b) << std::endl;
    // std::cout << b << std::endl;
    return (0);
}