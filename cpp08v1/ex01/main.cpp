/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 22:35:02 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/18 21:44:40 by ahaloui          ###   ########.fr       */
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
        Span sp = Span(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        
        std::vector<int> vec;
        for (int i = 0; i < 10; i++)
            vec.push_back(i);
        sp.addNumber(vec.begin(), vec.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        std::cout << "--------------------------------" << std::endl;
        // print the vector sp
        std::vector<int> vec_sp = sp.getVectorNumbers();
        for (std::vector<int>::iterator it = vec_sp.begin(); it != vec_sp.end(); it++)
            std::cout << *it << " ";
        std::cout << std::endl;
    }
    return (0);
}