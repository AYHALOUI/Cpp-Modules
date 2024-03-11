//#include "easyfind.hpp"

#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <list>


std::vector<int>::iterator easyfind(std::vector<int> numbers, int value)
{
    std::vector<int>::iterator it = std::find(numbers.begin(), numbers.end(), value);
    if (it == numbers.end())
        throw std::runtime_error("Value not found");
    return it;  
}

template<typename T> typename T::iterator test(T& container, int value)
{
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw std::runtime_error("Value not found");
    return it;  
}

int main()
{
    std::vector<int> numbers = {1, 2, 3, 4};
    std::list<std::string> lists = {"hallo", "from", "another","world"};
    std::vector<int>::iterator it;

    it = std::find(numbers.begin(), numbers.end(), 1);
    std::cout << *it << std::endl;
    return (0);
}