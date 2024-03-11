#include "Span.hpp"

// int main()
// {
//     Span span(1000);
//     for (size_t i = 1; i <= 1000; i++)
//         span.addNumber(i);

//     std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
//     std::cout << "Longest span: " << span.longestSpan() << std::endl;
//     return (0);
// }

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}