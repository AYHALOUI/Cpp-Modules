/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 09:44:11 by ahaloui           #+#    #+#             */
/*   Updated: 2023/08/08 17:48:41 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->index = 0;
}

int PhoneBook::addContact(Contact contact)
{
    if (this->index < 8)
    {
        this->contacts[this->index] = contact;
        this->index++;;
        return 1;
    }
    return (0);
}

void PhoneBook::displayContacts()
{
    // std:: cout << "-------------------------------------------------------\n";
    // std:: cout << "index\tfirstName\tlastName\tnickName\n";

    std::cout << std::right << std::setw(10) << index << " | "
                  << std::right << std::setw(10) << truncateText(firstName, 10) << " | "
                  << std::right << std::setw(10) << truncateText(lastName, 10) << " | "
                  << std::right << std::setw(10) << truncateText(nickname, 10) << std::endl;
}

void PhoneBook:: enterInformations()
{
    
}

