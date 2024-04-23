/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:15:27 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/24 00:17:18 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
    // std::cout << "Default constructor called from PmergeMe" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
    std::cout << "Copy constructor called from PmergeMe" << std::endl;
    (*this) = copy;
}


PmergeMe &PmergeMe::operator=(const PmergeMe &copy)
{
    std::cout << "Assignation operator called from PmergeMe" << std::endl;
    if (this == &copy)
        return (*this);
    return (*this);
}

PmergeMe::~PmergeMe()
{
    // std::cout << "Destructor called from PmergeMe" << std::endl;
}

int PmergeMe::jacobsthal(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return (jacobsthal(n - 1) + 2 * jacobsthal(n - 2));
}

void PmergeMe::fill_vector(std::string str)
{
    std::stringstream ss(str);
    std::string token;
    while (std::getline(ss, token, ' '))
    {
        std::pair<int, int> p;
        p.first = std::atoi(token.c_str());
        p.second = getline(ss, token, ' ') ? std::atoi(token.c_str()) : -1;
        unsorted_vector.push_back(p);
    }
}

std::string PmergeMe::join_args(int ac, char **av)
{
    std::string str;
    int tmp = ac % 2 == 0 ? ac - 1 : ac;
    for (int i = 1; i < tmp; i++)
    {
        str += av[i];
        if (i < ac - 1)
            str += " ";
    }
    return str;
}
void PmergeMe::reorder_pairs(std::pair<int, int> &p)
{
    if (p.first < p.second) {
        std::swap(p.first, p.second);
    }
}

void PmergeMe::sort_reorder_pairs()
{
    for (size_t i = 0; i < unsorted_vector.size(); i++)
        reorder_pairs(unsorted_vector[i]);
    // print unsorted vector after reordering
    std::cout << "Unsorted vector after reordering: " << std::endl;
    for (std::vector<std::pair<int, int> >::iterator it = unsorted_vector.begin(); it != unsorted_vector.end(); it++)
    {
        std::cout << "[" << it->first << ", " << it->second << "]" << " ";
    } 
    std::cout << std::endl;
    std::cout << "after sorting:" << std::endl;
    std::sort(unsorted_vector.begin(), unsorted_vector.end());
    for (std::vector<std::pair<int, int> >::iterator it = unsorted_vector.begin(); it != unsorted_vector.end(); it++)
    {
        std::cout << "[" << it->first << ", " << it->second << "]" << " ";
    }
    std::cout << std::endl;
}

/************************************************/
std::vector<std::pair<int, int> > PmergeMe::get_unsorted_vector() const
{
    return unsorted_vector;
}

void PmergeMe::fill_deque()
{
    for (size_t i = 0; i < unsorted_vector.size(); i++)
    {
        if (i == 0)
        {
            sorted_vector.push_back(unsorted_vector[i].second);
            sorted_vector.push_back(unsorted_vector[i].first);
            unsorted_vector[i].first = -1;
            unsorted_vector[i].second = -1;
        }
        else
        {
            sorted_vector.push_back(unsorted_vector[i].first);
            unsorted_vector[i].first = -1;
        }
    }
}



void PmergeMe::print_deque()
{
    for (std::deque<int>::iterator it = sorted_vector.begin(); it != sorted_vector.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}