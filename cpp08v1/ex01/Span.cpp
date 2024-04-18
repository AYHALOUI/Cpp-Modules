/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 22:35:21 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/18 21:54:34 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    std::cout << "Default Constructor Called from Span" << std::endl;
}

Span::Span(const Span& copy)
{
    std::cout << "Copy Constructor Called from Span" << std::endl;
    (*this) = copy;
}

Span& Span::operator= (const Span& copy)
{
    if (this == &copy)
        return (*this);
    this->vector_size = copy.vector_size;
    this->vector_numbers = copy.vector_numbers;
    return (*this);
}

Span::~Span()
{
    std::cout << "Destructor Called from Span" << std::endl;
}

Span::Span(unsigned int vector_size):vector_size(vector_size)
{
    std::cout << "Parametric Constructor Called from Span" << std::endl;
}

void Span::addNumber(int element)
{
    std::cout << "addNumber Called from Span" << std::endl;
    if (vector_numbers.size() > vector_size)
        throw (VectorOfSpanException());
    vector_numbers.push_back(element);
}

int Span::shortestSpan ()
{
    if (this->vector_numbers.size() <= 1)
        return (this->vector_numbers.at(0));
    /* Algorithm of shortest_value */
    std::vector<int> temp = this->vector_numbers;
    std::sort(temp.begin(), temp.end());
    int shortest_value = temp.at(1) - temp.at(0); 
    for (size_t i = 1; i < this->vector_numbers.size() - 1; i++)
    {
        if (temp.at(i+1) - temp.at(i) < shortest_value)
            shortest_value = temp.at(i+1) - temp.at(i);
    }
    return (shortest_value);
}

int Span::longestSpan()
{
    /* Algorithm of longest_value */
    if (this->vector_numbers.size() <= 1)
        return (this->vector_numbers.at(0));
    std::vector<int> temp = this->vector_numbers;
    std::sort(temp.begin(), temp.end());
    return (temp.at(this->vector_numbers.size() - 1) 
        - temp.at(0));
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    std::cout << "addNumber Called from Span" << std::endl;
    if (vector_numbers.size() > vector_size)
        throw (VectorOfSpanException());
    vector_numbers.insert(vector_numbers.begin()+1, begin, end);
}

std::vector<int> Span::getVectorNumbers() const
{
    return (this->vector_numbers);
}

const char* Span::VectorOfSpanException:: what() const throw()
{
    return ("Vector is Full");
}


