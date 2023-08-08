/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:37:45 by ahaloui           #+#    #+#             */
/*   Updated: 2023/08/08 17:02:05 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook phonebook;
    std::string commande;
    
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;


    std::cout << "Programme Started\n";
    while (1)
    {
        getline(std:: cin, commande);
        if (!commande.compare("ADD"))
        {            
            // enterInformations();
            std::cout << "Enter First Name: ";
            getline(std:: cin, firstName);
            std::cout << "Enter Last Name: ";
            getline(std:: cin, lastName);
            std::cout << "Enter Nick Name: ";
            getline(std:: cin, nickName);
            std::cout << "Enter Phone Number: ";
            getline(std:: cin, phoneNumber);
            std::cout << "Enter Darkest Secret: ";
            getline(std:: cin, darkestSecret);
            if (phonebook.addContact(Contact(firstName, lastName, nickName, phoneNumber, darkestSecret)))
                std:: cout << "contact add successfully\n";
            else
                std:: cout << "contact not add successfully\n";
        }
        else if (!commande.compare("SEARCH"))
            phonebook.displayContacts();
        else if (!commande.compare("EXIT"))
        {
            std::cout << "Bay\n";
            exit(0);
        }
    };
}