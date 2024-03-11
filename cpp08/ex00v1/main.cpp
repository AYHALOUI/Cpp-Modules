#include "easyfind.hpp"

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    std::vector<int> numbers ;
    for (size_t i = 0; i < 5; i++)
        numbers.push_back(arr[i]);
    try
    {
        std::cout << *easyfind(numbers, 10) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}