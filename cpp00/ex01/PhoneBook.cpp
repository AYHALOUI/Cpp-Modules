/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:19:09 by ahaloui           #+#    #+#             */
/*   Updated: 2023/08/22 14:56:21 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	
}
int PhoneBook::getNumContact()
{
	return (this->numContact);
}
void PhoneBook::addContact(Contact contact)
{
	int count = this->numContact % 8;
	this->contacts[count] = contact;
	this->numContact++;
	std::cout << "\033[32m" << "Contact added successfully." << "\033[0m" << std::endl;
}

std::string PhoneBook:: truncateString(std::string str, int maxLength)
{
    if (str.length() <= maxLength)
        return str;
    else{
        return str.substr(0, maxLength) + ".";
    }
}

void PhoneBook::displayContacts()
{
	int num_contacts = this->numContact;
	if (this->numContact > 8)
		num_contacts = 8;
	std::cout << "Phone Book: " << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
	std::cout << "| Index    | First Name | Last Name  | Nickname  |" << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
	for(int i = 0; i < num_contacts; i++)
	{
		std::cout << "| " << std::setw(10) << i << " | " << std::setw(10) << truncateString(this->contacts[i].getFirstName(), 10)
        << " | " << std::setw(10) << truncateString(this->contacts[i].getLastName(), 10) << " | " << std::setw(10)
        << truncateString(this->contacts[i].getNickName(), 10) << " |" << std::endl;
		std::cout << "---------------------------------------------------" << std::endl;
	}
}

void PhoneBook::displayContactByIndex(int index)
{
	for (int i = 0; i < this->numContact; i++)
	{
		if (i == index)
		{
			std::cout << "******************************************************\n";
			std::cout << "Contact " << index << ":" << std::endl;
			std::cout << "First Name: " << this->contacts[index].getFirstName() << std::endl;
			std::cout << "Last Name: " << this->contacts[index].getLastName() << std::endl;
			std::cout << "Nick Name: " << this->contacts[index].getNickName() << std::endl;
			std::cout << "Phone Number: " << this->contacts[index].getPhoneNumber() << std::endl;
			std::cout << "Darkset Secret: " << this->contacts[index].getDarkestSecret() << std::endl;
			std::cout << "******************************************************\n";
			break;
		}
	}
}

int PhoneBook::getIndex(int index)
{
	for (int i = 0; i < this->numContact; i++)
	{
		if (i == index)
			return (index);
	}
	return (0);
}