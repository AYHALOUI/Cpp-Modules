#include "Span.hpp"

int main()
{
    Span span(1000);
    for (size_t i = 1; i <= 1000; i++)
        span.addNumber(i);

    std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
    std::cout << "Longest span: " << span.longestSpan() << std::endl;
    return (0);
}