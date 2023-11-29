#include "iter.hpp"

int	main(void)
{
    int		int_array[5] = { 1, 2, 3, 4, 5 };
    float	float_array[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    char	char_array[5] = { 'a', 'b', 'c', 'd', 'e' };
    std::string	string_array[5] = { "one", "two", "three", "four", "five" };

    std::cout << "int_array:" << std::endl;
    iter(int_array, 5, print);
    std::cout << std::endl;

    std::cout << "float_array:" << std::endl;
    iter(float_array, 5, print);
    std::cout << std::endl;

    std::cout << "char_array:" << std::endl;
    iter(char_array, 5, print);
    std::cout << std::endl;

    std::cout << "string_array:" << std::endl;
    iter(string_array, 5, print);
    std::cout << std::endl;

    return (0);
}