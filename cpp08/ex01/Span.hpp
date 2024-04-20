/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 22:35:29 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/19 22:13:58 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm> // Include the algorithm header for std::sort

class Span
{
    private:
        unsigned int vector_size;
        std::vector<int> vector_numbers;
    
    public:
        /* Orthodox Canonical Form */
        Span();
        Span(const Span& copy);
        Span& operator= (const Span& copy);
        ~Span();

        /* Constructor Parametrized */
        Span (unsigned int vector_size);
        
        /* Member Functions */
        void addNumber (int element);
        int shortestSpan ();
        int longestSpan();
        
        /* addRange */
        void addRange (std::vector<int>::iterator begin, std::vector<int>::iterator end);

        /* getter */
        std::vector<int> getVectorNumbers() const;

        /* Exception Class */
        class VectorOfSpanException : public std::exception 
        {
            public:
				const char* what() const throw();
        };
};
#endif