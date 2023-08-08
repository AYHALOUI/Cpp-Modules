/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:33:42 by ahaloui           #+#    #+#             */
/*   Updated: 2023/08/08 16:05:29 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>
#include <iostream>

class Contact {

    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;
    
    public:
        Contact();
        Contact(std:: string firstName, std:: string lastName, std::string nickName, std:: string phoneNumber, std::string darkestSecret);
        
        void setFirstName(std::string firstName);
        std::string getFirstName();
        
        void setLastName(std::string lastName);
        std::string getLastName();

        void setPhoneNumber(std::string phoneNumber);
        std::string getPhoneNumber();

        void setNickName(std:: string nickName);
        std::string getNickName();
        
        void setDarkestSecret(std::string darkestSecret);
        std::string getDarketSecret();
        
        void displayInfo();
};

#endif