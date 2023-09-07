/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 21:12:59 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/07 20:39:43 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{
    private:
        Weapon *typePTR;
        std::string name;
        
    public:
        HumanB(std::string name);
        void attack();
        void setWeapon(Weapon &typePTR);
};

#endif