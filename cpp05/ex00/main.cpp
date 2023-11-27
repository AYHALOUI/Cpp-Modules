/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:36:57 by ahaloui           #+#    #+#             */
/*   Updated: 2023/11/26 22:44:23 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BureauCrat.hpp"

int main()
{
    BureauCrat b1;
    BureauCrat b2("aymene", 2);

    std::cout << b2.getName() << std::endl;
    return (0);
}