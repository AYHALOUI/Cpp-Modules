/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:15:46 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/23 22:32:31 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Usage: ./PmergeMe [string of numbers separated by spaces]" << std::endl;
        return 1;
    }
    PmergeMe p;
    std::string str = p.join_args(ac, av);
    p.fill_vector(str);
    std::vector<std::pair<int, int> > unsorted = p.get_unsorted_vector();
    for (std::vector<std::pair<int, int> >::iterator it = unsorted.begin(); it != unsorted.end(); it++)
    {
        std::cout << it->first << ":" << it->second << std::endl;
    }
    return 0;
}