/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 09:56:05 by ahaloui           #+#    #+#             */
/*   Updated: 2023/08/21 11:33:58 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	std::cout << "Contact constructor" << std::endl;	
}
Contact::Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickName = nickName;
	this->phoneNumber = phoneNumber;
	this->darkestSecret = darkestSecret;
}
/****************************************************************/
std::string Contact::getFirstName()
{
	return (this->firstName);	
}

std::string Contact::getLastName()
{
	return (this->lastName);
}

std::string Contact::getNickName()
{
	return (this->nickName);
}

std::string Contact::getPhoneNumber()
{
	return (this->phoneNumber);
}

std::string Contact::getDarkestSecret()
{
	return (this->darkestSecret);
}
/*********************************************************************/

void Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}

void Contact::setNickName(std::string nickName)
{
	this->nickName = nickName;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

/*********************************************************************/

void Contact::displayContact()
{
	std::cout << "******************************************************\n";
	std::cout << "First Name: " << this->firstName << std::endl;
	std::cout << "Last Name: " << this->lastName << std::endl;
	std::cout << "Nick Name: " << this->nickName << std::endl;
	std::cout << "Phone Number: " << this->phoneNumber << std::endl;
	std::cout << "Darkset Secret: " << this->darkestSecret << std::endl;
	std::cout << "******************************************************\n";
}
