/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:15:27 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/23 22:34:28 by ahaloui          ###   ########.fr       */
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
    for (int i = 1; i < ac; i++)
    {
        str += av[i];
        if (i < ac - 1)
            str += " ";
    }
    return str;
}

/************************************************/
std::vector<std::pair<int, int> > PmergeMe::get_unsorted_vector() const
{
    return unsorted_vector;
}

std::vector<std::pair<int, int> > PmergeMe::get_sorted_vector() const
{
    return sorted_vector;
}