#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class Span
{
    private:
        std::vector<int> numbers;
        unsigned int max_size;
    
    public:
        Span();
        Span(Span const &copy);
        Span &operator=(Span const &rhs);
        ~Span();

        // Member functions
        Span(unsigned int n);
        void addNumber(int n);
        class SpanFullException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Span is full";
                }
        };
        class SpanNoSpanException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "No span to find";
                }
        };
        int shortestSpan();
        int longestSpan();
};

#endif