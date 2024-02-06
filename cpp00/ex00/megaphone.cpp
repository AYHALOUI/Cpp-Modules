/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 10:02:19 by ahaloui           #+#    #+#             */
/*   Updated: 2023/08/08 10:04:57 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"


int main(int ac, char **av) 
{
    std::string name;
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    if (ac == 2)
    {
        name = av[1];
        for(int i = 0; i < (int)name.length(); i++)
        {
            name[i] = toupper(name[i]);
            std::cout << name[i] << "\n";
        }
    }
    
    std::cout << name;
    return(0);
}