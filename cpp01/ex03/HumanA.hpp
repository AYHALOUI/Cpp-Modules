/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 21:12:32 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/07 20:50:22 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
    private:
        Weapon &weaponREF;
        std::string name;
        
    public:
        HumanA(std::string name, Weapon &weapon);
        void attack();
        ~HumanA();
};
#endif