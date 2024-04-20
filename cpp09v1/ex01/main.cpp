/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:14:57 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/20 20:15:00 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "iostream"

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;

    std::cout << "str: " << str << std::endl;
    std::cout << "ptr: " << *ptr << std::endl;
    std::cout << "ref: " << ref << std::endl;
    return 0;
}