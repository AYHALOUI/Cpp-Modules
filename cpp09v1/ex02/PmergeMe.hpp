/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:15:29 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/24 17:59:55 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <stack>
#include <sstream>
#include <vector>

class PmergeMe
{
    private:
        std::vector<std::pair<int, int> > unsorted_vector;
        static std::string last_arg;

    public:
        PmergeMe();
        PmergeMe(const PmergeMe &copy);
        PmergeMe &operator=(const PmergeMe &copy);
        ~PmergeMe();


        bool parse_args(int ac, char **av);
        void fill_vector(std::string str);
        std::string join_args(int ac, char **av);
        int jacobsthal(int n);

        void reorder_pairs(std::pair<int, int> &p);
        void sort_reorder_pairs();
        void separate_vector();
};

#endif