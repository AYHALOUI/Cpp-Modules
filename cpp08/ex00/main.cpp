/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 22:33:02 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/17 18:06:07 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


int main()
{
    std::vector<int> vector_numbers;
    std::list<int> list_numbers;

    std::cout << "* ---- Fill the vector with numbers from 0 to 9 ---- *" << std::endl;
    for(int i = 0; i < 10; i++)
        vector_numbers.push_back(i);

    std::cout << "* ---- Fill the list with numbers from 10 to 100 ---- *" << std::endl;
    for(int i = 10; i <= 100; i+=10)
        list_numbers.push_back(i);

    std::cout << "* ---- Display the vector ---- *" << std::endl;
    for (std::vector<int>::iterator it = vector_numbers.begin(); it != vector_numbers.end(); it++)
        std::cout << *it << std::endl;
    
    std::cout << "* ---- Display the list ---- *" << std::endl;
    for (std::list<int>::iterator it = list_numbers.begin(); it != list_numbers.end(); it++)
        std::cout << *it << std::endl;
    try
    {
        std::cout << "* ---- Exception test ---- *" << std::endl;
        std::cout << *easyfind(vector_numbers, 9) << std::endl;
        std::cout << *easyfind(list_numbers, 100) << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    std::cout << "* ----------------------------- *" << std::endl;
    return (0);
}