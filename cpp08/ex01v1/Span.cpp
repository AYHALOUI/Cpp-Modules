#include "Span.hpp"

Span::Span() : numbers(), max_size(0) {}

Span::Span(Span const &copy)
{
    *this = copy;
}

Span &Span::operator=(Span const &rhs)
{
    if (this == &rhs)
        return *this;
   this->numbers = rhs.numbers;
    this->max_size = rhs.max_size;
    return *this;
}

Span::~Span() {}

Span::Span(unsigned int n) : numbers(), max_size(n) {}

void Span::addNumber(int n)
{
    if (numbers.size() >= max_size)
        throw SpanFullException();
    numbers.push_back(n);
}

int Span::shortestSpan()
{
    if (numbers.size() <= 1)
        throw SpanNoSpanException();
    std::vector<int> sorted = numbers;
    std::sort(sorted.begin(), sorted.end());
    int min = sorted[1] - sorted[0];
    for (size_t i = 1; i < sorted.size() - 1; i++)
    {
        if (sorted[i + 1] - sorted[i] < min)
            min = sorted[i + 1] - sorted[i];
    }
    return min;
}

int Span::longestSpan()
{
    if (numbers.size() <= 1)
        throw SpanNoSpanException();
    int min = *std::min_element(numbers.begin(), numbers.end());
    int max = *std::max_element(numbers.begin(), numbers.end());
    return max - min;
}