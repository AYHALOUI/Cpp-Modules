#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T, typename F>
void iter (T* array, size_t length, F function)
{
    for (size_t i = 0; i < length; i++)
    {
        function(array[i]);
    }
}

template <typename T>
void printArrayElement(T element)
{
    std::cout << element << std::endl;
}

#endif