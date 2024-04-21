/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:14:08 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/21 18:23:30 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
    // std::cout << "Default constructor called from RPN" << std::endl;
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
    // std::cout << "Destructor called from RPN" << std::endl;
}

bool countOperands(std::string expression)
{
    int count_operators = 0;
    int count_digits = 0;
    for (size_t i = 0; i < expression.length(); i++)
    {
        if (expression[i] == '+' || expression[i] == '-' 
            || expression[i] == '*' || expression[i] == '/')
            count_operators++;
        if (isdigit(expression[i]))
            count_digits++;
    }
    if (count_operators + 1 != count_digits)
        return (false);
    return (true);
}

bool parseExpression(std::string expression)
{
    if (expression.empty())
        return (false);
    for (size_t i = 0; i < expression.length(); i++)
    {
        if (expression[i] != '+' && expression[i] != '-' 
            && expression[i] != '*' && expression[i] != '/' 
                && !isdigit(expression[i]) && expression[i] != ' ')
            return (false);
    }
    if (countOperands(expression) == false)
        return (false);
    return (true);
}




int RPN::calculateRPN(std::string expression)
{
    if (!parseExpression(expression))
    {
        std::cout << "Error" << std::endl;
        exit(1);
    }
    std::stack<int> operands;

    std::istringstream iss(expression);
    std::string token;

    iss >> token;
    while (iss)
    {
        if (token != "+" && token != "-" && token != "*" && token != "/")
        {
            if (atoi(token.c_str()) > 9 
                || atol(token.c_str()) < INT_MIN)
            {
                std::cout << "Error" << std::endl;
                exit(1);
            }
            operands.push(std::atoi(token.c_str()));   
        }
        else
        {
           if (operands.size() < 2)
           {
               std::cout << "Error" << std::endl;
               exit(1);
           }
           int b = operands.top();
           operands.pop();
           int a = operands.top();
           operands.pop();
           if (token == "+")
               operands.push(a + b);
            else if (token == "-")
                operands.push(a - b);
            else if (token == "*")
                operands.push(a * b);
            else if (token == "/")
                operands.push(a / b);
        }
        iss >> token;
    }
    return (operands.top());
}