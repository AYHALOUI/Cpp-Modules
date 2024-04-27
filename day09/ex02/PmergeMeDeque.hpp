/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeDeque.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 22:57:20 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/28 00:18:01 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEMEDEQUE_HPP
#define PMERGEMEDEQUE_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <deque>



class PmergeMeDeque
{
    private:
        std::deque<std::pair<int, int> > unsorted_deque;
        std::deque<int> main_deque;
        std::deque<int> pend_deque;
        std::deque<int> index_deque;
        static std::string last_arg;

    public:
        PmergeMeDeque();
        PmergeMeDeque(const PmergeMeDeque &copy);
        PmergeMeDeque &operator=(const PmergeMeDeque &copy);
        ~PmergeMeDeque();

        /* getters */
        std::deque<std::pair<int, int> > getUnsortedDeque() const;
        std::deque<int> getMainDeque() const;
        std::deque<int> getPendDeque() const;
        static std::string getLastArg();

        /* members functions: parsing */
        bool parse_args(int ac, char **av);
        std::string join_args(int ac, char **av);
        void replace_char (std::string& args, char target, char remplacement);
        std::string remove_all_with_spaces(std::string args);

        /* members functions: main */
        void print_before_sort();
        void print_after_sort();
        void fill_unsorted_deque(std::string args);
        void reorders_pairs (std::pair<int, int>& pair);
        void sort_reorder_pairs();
        int jacobsthal(int n);
        void create_main_and_pend();
        void create_index_deque();
        void sort_main_deque();
};

#endif