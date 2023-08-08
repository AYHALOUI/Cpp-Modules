/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:01:59 by ahaloui           #+#    #+#             */
/*   Updated: 2023/08/08 16:40:13 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>

class PhoneBook
{
    private:
        Contact contacts[8];
        int index;
    
    public:
        PhoneBook();
        int addContact(Contact contact);
        void enterInformations();
        void displayContacts();
};

#endif