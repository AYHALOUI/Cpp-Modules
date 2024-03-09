#include "iter.hpp"

int	main(void)
{
    int int_array[4] = {1, 2, 3, 4};
    double double_array[4] = {4.3, 3.2, 2.1, 1.0};
    std::string string_array[3] = {"aymene", "haloui", "ahaloui"};

    std::cout << "int_array:" << std::endl;
    iter(int_array, 4, printArrayElement<int>);
    std::cout << "****************************" << std::endl;
    ::iter(double_array, 4, printArrayElement<double>);
    std::cout << "****************************" << std::endl;
    ::iter(string_array, 3, printArrayElement<std::string>);
    return (0);
}