/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:15:46 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/23 23:20:00 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    PmergeMe p;
    std::string str = p.join_args(ac, av);
    p.fill_vector(str);
    p.sort_reorder_pairs();
    // std::vector<std::pair<int, int> > unsorted = p.get_unsorted_vector();
    // for (std::vector<std::pair<int, int> >::iterator it = unsorted.begin(); it != unsorted.end(); it++)
    // {
    //     std::cout << it->first << " " << it->second << std::endl;
    // }

    
    // p.sort_pairs();
    // std::vector<std::pair<int, int> > sorted = p.get_sorted_vector();
    // for (std::vector<std::pair<int, int> >::iterator it = sorted.begin(); it != sorted.end(); it++)
    // {
    //     std::cout << it->first << " " << it->second << std::endl;
    // }
    return 0;
}