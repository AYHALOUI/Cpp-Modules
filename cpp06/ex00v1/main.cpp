#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    (void)ac;
    (void)av;
    try
    {
        if (ac != 2)
            throw std::invalid_argument("Invalid number of arguments");
        ScalarConverter::convert(av[1]);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    // int b =(int) 4.12;

    // std::cout << b << std::endl;
    // std::cout << static_cast<double>(4.4);

    return 0;
}