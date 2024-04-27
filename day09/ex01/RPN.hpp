/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:14:52 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/27 20:36:50 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <stack>
#include <sstream>

class RPN
{
    private:
        std::stack<int> stack_result;
        
    public:
        /* Orthodox Canonical Form */
        RPN();
        RPN(const RPN &copy);
        RPN &operator=(const RPN &copy);
        ~RPN();
    
        /* Members functions */
        void print_error (std::string error);
        bool count_operator (std::string arg);
        void debug(std::string str);
        bool every_char_between_space (std::string arg);
        // std::string remove_withe_spaces (std::string str);
        bool check_digit (std::string arg);
        bool must_start_with_digit (std::string arg);
        bool must_end_with_operator (std::string arg);
        bool parsing_arg (std::string arg);
        int calculate_rpn (std::string arg);
};
#endif
