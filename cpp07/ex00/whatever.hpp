#ifndef WHATEVER_HPP
#define WHATEVER_HPP


#include <iostream>
#include <string>


/* Swap Function */
template <typename T>
void swap(T& a, T& b)
{
    T tmp = a;
    a = b;
    b = tmp;
}
/* Min Function */
template <typename T>
T min(T a, T b)
{
    if (a < b)
        return (a);
    return (b);
}

/* Max Function */
template <typename T>
T max(T a, T b)
{
    if (a > b)
        return (a);
    return (b);
}

#endif