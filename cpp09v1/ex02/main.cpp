/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:15:46 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/24 18:06:25 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    PmergeMe p;
    if (!p.parse_args(ac, av))
    {
        std::cout << "Error" << std::endl;
        return (1);
    }
    std::string str = p.join_args(ac, av);
    p.fill_vector(str);
    p.sort_reorder_pairs();
    p.separate_vector();
    return 0;
}