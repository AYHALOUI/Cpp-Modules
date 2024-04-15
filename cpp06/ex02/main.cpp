/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 01:28:24 by ahaloui           #+#    #+#             */
/*   Updated: 2024/04/15 02:06:32 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
int main() 
{
    std::cout <<  "-------------------------------------------" << std::endl;
    Base *ptr = generate();
    A a;

    Base& base = a;
    std::cout <<  "-------------------------------------------" << std::endl;
    identify(ptr);
    identify(base);
    std::cout << "--------- End of Program ---------" << std::endl;
    return (1); 
}