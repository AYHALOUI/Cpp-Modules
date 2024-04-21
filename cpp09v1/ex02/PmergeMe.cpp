/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:15:27 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/21 18:30:19 by ahaloui          ###   ########.fr       */
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