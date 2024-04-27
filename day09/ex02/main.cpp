/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 23:18:53 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/28 00:01:12 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include "PmergeMeDeque.hpp"

int main(int ac, char **av)
{
    PmergeMe vec;
    PmergeMeDeque deq;
    if (!vec.parse_args(ac, av))
        return (1);
    /***********************************/
    // vec.print_before_sort(ac, av);
    vec.fill_unsorted_vector(vec.join_args(ac, av));
    vec.sort_reorder_pairs();
    vec.create_main_and_pend();
    vec.create_index_vector();
    vec.sort_main_vector();

    deq.fill_unsorted_deque(deq.join_args(ac, av));
    deq.sort_reorder_pairs();
    deq.create_main_and_pend();
    deq.create_index_deque();
    deq.sort_main_deque();
    
    /***********************************/
    return 0;
}