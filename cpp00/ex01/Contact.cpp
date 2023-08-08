/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 09:45:16 by ahaloui           #+#    #+#             */
/*   Updated: 2023/08/08 16:07:27 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    
}

Contact::Contact(std:: string firstName, std:: string lastName, std::string nickName, std:: string phoneNumber, std::string darkestSecret){
    this->firstName = firstName;
    this->lastName = lastName;
    this->phoneNumber = phoneNumber;   
    this->nickName = nickName;
    this->darkestSecret = darkestSecret;
}

void Contact::setFirstName(std:: string firstName)
{
    this->firstName = firstName;
}

std::string Contact::getFirstName()
{
    return (this->firstName);
}

void Contact::setLastName(std::string lastName)
{
    this->lastName = lastName;
}

std::string Contact:: getLastName()
{
    return (this->lastName);
}

void Contact:: setPhoneNumber(std::string phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

std::string Contact:: getPhoneNumber()
{
    return (this->phoneNumber);
}

void Contact:: setNickName(std:: string nickName)
{
    this->nickName = nickName;
}

std::string Contact:: getNickName()
{
    return (this->nickName);
}

void Contact:: setDarkestSecret(std:: string darkestSecret)
{
    this->darkestSecret = darkestSecret;
}

std::string Contact:: getDarketSecret()
{
    return (this->darkestSecret);
}



void Contact::displayInfo()
{
    std::cout << "First Name: " << this->firstName << std::endl;
    std::cout << "Last Name: " << this->lastName << std::endl;
    std::cout << "Phone Number : " << this->phoneNumber << std::endl;
    std::cout << "Nick Name : " << this->nickName << std::endl;
    std::cout << "Darkest Secret : " << this->darkestSecret << std::endl;
}


