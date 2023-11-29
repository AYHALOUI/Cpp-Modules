#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class Span
{
    private:
        unsigned int _n;
        std::vector<int> _v;
        Span();
    public:
        Span(unsigned int n);
        Span(const Span &copy);
        ~Span();
        Span &operator=(const Span &copy);
        void addNumber(int n);
        void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int shortestSpan();
        int longestSpan();
        class FullException : public std::exception
        {
            const char *what() const throw()
            {
                return ("Span is full");
            }
        };
        class NoSpanException : public std::exception
        {
            const char *what() const throw()
            {
                return ("No span to find");
            }
        };
};

#endif