/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:38:19 by ahaloui           #+#    #+#             */
/*   Updated: 2023/09/07 17:20:55 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
    std::cout << std::endl;
}

void Harl::info() 
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
    std::cout << std::endl;
}

void Harl::warning() {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
    std::cout << std::endl;
}

void Harl::error() 
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}

void Harl::someThingElse() 
{
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl; 
}

int Harl::convetToInteger(std::string level)
{
    int a = 0;
    for(size_t i = 0; i < level.length(); i++)
        a = 10 * a + (level[i] - '0');
    return a;
}

void Harl::complain(std::string level)
{
 
	void (Harl::*ptrFunctions[])(void) = 
    {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};

   switch (this->convetToInteger(level))
    {
        case 223193: // DEBUG
            (this->*ptrFunctions[0])();
        case 28251: // INFO
            (this->*ptrFunctions[1])();
        case 41072823: // WARNING
            (this->*ptrFunctions[2])();
        case 247744: // ERROR
            (this->*ptrFunctions[3])();
            break;
        default:
            this->someThingElse();
    }
}