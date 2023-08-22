/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:15:12 by ahaloui           #+#    #+#             */
/*   Updated: 2023/08/22 12:12:40 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <sstream>

class PhoneBook{

	private:
		Contact contacts[8];
		int numContact;
		
	public:
		PhoneBook();
		
		int getNumContact();
		std::string truncateString(std::string str, int maxLength);
		void addContact(Contact contact);
		void displayContacts();
		void displayContactByIndex(int index);
		int getIndex(int index);
};

#endif