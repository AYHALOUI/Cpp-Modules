/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 22:33:02 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/16 23:12:06 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    // std::vector<int> arr;
    // std::vector<int>::iterator ptr;

    
    // int i = -1;
    // while (++i < 5)
    //     arr.push_back(i);
    // for (ptr = arr.begin(); ptr < arr.end(); ptr++)
    // {
    //     std::cout << &(*ptr) << std::endl;
    //     std::cout << *ptr << std::endl;   
    // }

    std::vector<int> arr;
    int i = 0;
    while (++i <= 5)
    {
        arr.push_back(i);
        std::cout << i << " ";   
    }
    std::cout << std::endl;
    std::vector<int>::iterator ptr = arr.begin();
    //std::vector<int>::iterator ftr = arr.end();
    // std::advance(ptr, 4);
    // std::cout << *ptr << std::endl;
    auto it = next(ptr, 3);
    std::cout << *it << std::endl;
    return (0);
}