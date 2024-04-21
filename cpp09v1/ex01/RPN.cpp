/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:14:08 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/21 13:50:32 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
    std::cout << "Default constructor called from RPN" << std::endl;
}

RPN::RPN(const RPN &copy)
{
    std::cout << "Copy constructor called from RPN" << std::endl;
    (*this) = copy;
}

RPN &RPN::operator=(const RPN &copy)
{
    std::cout << "Assignation operator called from RPN" << std::endl;
    if (this == &copy)
        return (*this);
    return (*this);
}

RPN::~RPN()
{
    std::cout << "Destructor called from RPN" << std::endl;
}

int RPN::calculateRPN(std::string expression)
{
    std::stack<int> operands;

    std::istringstream iss(expression);
    std::string token;
    return (0);
}