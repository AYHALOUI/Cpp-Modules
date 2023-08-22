/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 10:30:11 by ahaloui           #+#    #+#             */
/*   Updated: 2023/08/22 12:53:03 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


int main(int ac, char **av)
{
	PhoneBook phonebook;
	Contact newContact;
	std::string commande;

	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darksetSecret;
	std::string index;

	std::cout << "We have commands: " << std::endl;
	std::cout << "ADD, SEARCH, EXIT: " << std::endl;
	std::cout << "Choose One: " << std::endl;
	while (1)
	{
		std::cout << "Enter a Command: => ";
		getline(std::cin, commande);
		if (!commande.compare("ADD"))
		{
			if (std::cin.eof())
			exit(EXIT_FAILURE);
			
			std::cout << "Enter First Name: ";
			getline(std::cin, firstName);
			
			if (firstName.empty())
				continue;
			
			std::cout << "Enter Last Name: ";
			getline(std::cin, lastName);
			if (lastName.empty())
				continue;
				
			std::cout << "Enter Nick Name: ";
			getline(std::cin, nickName);
			if (nickName.empty())
				continue;

			std::cout << "Enter Phone Number: ";
			getline(std::cin, phoneNumber);
			if (phoneNumber.empty())
				continue;

			std::cout << "Enter Darkset Secret: ";
			getline(std::cin, darksetSecret);
			if (darksetSecret.empty())
				continue;
				
			phonebook.addContact(Contact(firstName, lastName, nickName, phoneNumber, darksetSecret));
		}
		else if (!commande.compare("SEARCH"))
		{
			phonebook.displayContacts();
			while (1)
			{
				if (std::cin.eof())
					exit(EXIT_FAILURE);
				int numIndex = 0;
				getline(std::cin, index);
				std::stringstream(index) >> numIndex;
				if (!isdigit(numIndex))
					phonebook.displayContactByIndex(numIndex);
				else
					std::cout << "Index of Contact not found !." << std::endl;
				break;
			}
		}
		else if (!commande.compare("EXIT"))
			exit(EXIT_FAILURE);
		else if (std::cin.eof())
			break;
	}
}
