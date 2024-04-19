/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 22:35:02 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/19 22:22:23 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    std::cout << "--------------------------------" << std::endl;
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        try
        {
            sp.addNumber(11);
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    std::cout << "--------------------------------" << std::endl;
    {
        srand(time(NULL));
        Span sp = Span(10000);
        std::vector<int> vec(10000);
        sp.addRange(vec.begin(), vec.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        std::cout << "--------------------------------" << std::endl;
        std::vector<int> vec_sp = sp.getVectorNumbers();
        for (std::vector<int>::iterator it = vec_sp.begin(); it != vec_sp.end(); it++)
            std::cout << *it << " ";
        std::cout << std::endl;
        std::cout << "--------------------------------" << std::endl;
    }
    return (0);
}