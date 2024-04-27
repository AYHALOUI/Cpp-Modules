/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:14:08 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/27 20:49:43 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{

}

RPN::RPN(const RPN &copy)
{
	(*this) = copy;
}

RPN &RPN::operator=(const RPN &copy)
{
	if (this == &copy)
		return (*this);
	this->stack_result = copy.stack_result;
	return (*this);
}

RPN::~RPN()
{
	
}

void RPN::print_error (std::string error)
{
	std::cout << error << std::endl;
	exit(EXIT_FAILURE);
}

bool RPN::count_operator (std::string arg)
{
	int count_operators;
	int count_digits;

	count_operators = 0;
	count_digits = 0;
	for (size_t i = 0; i < arg.length(); i++)
	{
		if (arg[i] == '+' || arg[i] == '-'
			|| arg[i] == '/' || arg[i] == '*')
			count_operators++;
		else if (isdigit(arg[i]))
			count_digits++;
	}
	if ((count_operators + 1) != count_digits)
	{
		return (false);	
	}
	return (true);
}

bool RPN::every_char_between_space (std::string arg)
{
	for (size_t i = 0; i < arg.length() - 1; i++)
	{
		if (arg[i] == '+' || arg[i] == '-'
			|| arg[i] == '/' || arg[i] == '*' 
				|| isdigit(arg[i]))
		{
			if (arg[i + 1] != ' ')
				return (false);			
		}
	}
	return (true);
}

void RPN::debug(std::string str)
{
	std::cout << "[" << str  << "]" << std::endl;
}

bool RPN::check_digit (std::string arg)
{
	for (size_t i = 0; i < arg.length(); i++)
	{
		if (isdigit(arg[i]))
		{
			std::string tmp(1, arg[i]);
			if (std::atoi(tmp.c_str()) > 9)
				return (false);
		}
	}
	return (true);
}

bool RPN::must_start_with_digit (std::string arg)
{
	int start = 0;
	while (std::isspace(arg[start]))
		start++;
	if (!isdigit(arg[start]))
		return (false);	
	return (true);
}

bool RPN::must_end_with_operator (std::string arg)
{
	int end;

	end  = arg.length() - 1;
	while (std::isspace(arg[end]))
		end --;
	if ((arg[end] != '+' || arg[end] != '-'
		|| arg[end] != '*' || arg[end] != '/') && isdigit(arg[end]))
		return (false);
	return (true);
}

bool RPN::parsing_arg (std::string arg)
{
	if (arg.empty())
		return (false);
		
	for (size_t i = 0; i < arg.length(); i++)
	{
		if (arg[i] != '+' && arg[i] != '*' 
			&& arg[i] != '-' && arg[i] != '/'
				&& arg[i] != ' ' && !isdigit(arg[i]))
			return (false);
	}
	if (!must_start_with_digit(arg))
		return (false);
	if (!must_end_with_operator(arg))
		return (false);	
	if (!count_operator(arg))
		return (false);	
	if (!every_char_between_space(arg))
		return (false);
	return (true);
}



int RPN::calculate_rpn (std::string arg)
{
	if (!parsing_arg(arg))
		print_error("Error");	
	
	std::stringstream string_stream(arg);
	std::string value;
	
	while (std::getline(string_stream, value, ' '))
	{
		if (isdigit(value[0]) 
			&& (value != "+" && value != "-" 
				&& value != "*" && value != "/"))
			this->stack_result.push (std::atoi(value.c_str()));
		else if (!isdigit(value[0]) && (value == "+" || value == "-" 
				|| value == "*" || value == "/") && (this->stack_result.size() > 1))
		{

			int b_stack = this->stack_result.top();
			this->stack_result.pop();
			int a_stack = this->stack_result.top();
			this->stack_result.pop();
			if (value == "+")
               stack_result.push(a_stack + b_stack);
            else if (value == "-")
                stack_result.push(a_stack - b_stack);
            else if (value == "*")
                stack_result.push(a_stack * b_stack);
			else if (value == "/")
			{
				if (!b_stack)
					print_error("Error");
				stack_result.push(a_stack / b_stack);
			}
		}
	}
	return (stack_result.top());
}