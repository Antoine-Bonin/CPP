/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:36:09 by antbonin          #+#    #+#             */
/*   Updated: 2025/10/11 11:22:34 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PhoneBook.hpp"
#include "includes/Colors.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook(void) : _nextIndex(0), _contactCount(0)
{
}

PhoneBook::~PhoneBook(void)
{
}

void PhoneBook::addContact(void)
{
	Contact	newContact;

	std::string input;
	
	std::cout << GREEN << "First name: " << RESET;
	std::getline(std::cin, input);
	if (std::cin.eof()) {
		return ;
	}
	newContact.setFirstName(input);
	std::cout << GREEN << "Last name: " << RESET;
	std::getline(std::cin, input);
	if (std::cin.eof()) {
		return ;
	}
	newContact.setLastName(input);
	std::cout << GREEN <<  "Nickname: " << RESET;
	std::getline(std::cin, input);
	if (std::cin.eof()) {
		return ;
	}
	newContact.setNickname(input);
	std::cout << GREEN << "Phone number: " << RESET;
	std::getline(std::cin, input);
	if (std::cin.eof()) {
		return ;
	}
	newContact.setPhoneNumber(input);
	std::cout << RED << "Darkest secret: "<< RESET;
	std::getline(std::cin, input);
	if (std::cin.eof()) {
		return ;
	}
	newContact.setDarkestSecret(input);
	if (!newContact.isValid())
	{
		std::cout << RED << "Error: Contact cannot have empty fields!" << RESET << std::endl;
		return ;
	}
	this->_contacts[this->_nextIndex] = newContact;
	if (this->_nextIndex == 7)
	{
		this->_nextIndex = 0;
	}
	else
		this->_nextIndex++;
	if (this->_contactCount < 8)
		this->_contactCount++;
	std::cout << YELLOW << "Contact added successfully!" << std::endl;
}

void PhoneBook::searchContact(void)
{
	if (this->_contactCount == 0)
	{
		std::cout << RED << "PhoneBook is empty!" << std::endl;
		return ;
	}
	
	std::cout	<< BLUE << "\n     Index|First Name| Last Name|  Nickname\n"
				<< "-------------------------------------------"
				<< RESET << std::endl;

	for (int i = 0; i < this->_contactCount; i++)
	{
		
		std::cout << BLUE << std::right << std::setw(10) << i + 1 << "|" << RESET;
		std::string firstName = this->_contacts[i].getFirstName();
		if (firstName.length() > 10)
			std::cout << BLUE << firstName.substr(0, 9) << ".|" << RESET;
		else
			std::cout << BLUE << std::right << std::setw(10) << firstName << "|" << RESET;

				
		std::string lastName = this->_contacts[i].getLastName();
		if (lastName.length() > 10)
			std::cout << BLUE << lastName.substr(0, 9) << ".|" << RESET;
		else
			std::cout << BLUE << std::right << std::setw(10) << lastName << "|" << RESET;

				
		std::string nickname = this->_contacts[i].getNickname();
		if (nickname.length() > 10)
			std::cout << BLUE << nickname.substr(0, 9) << "." << RESET;
		else
			std::cout << BLUE << std::right << std::setw(10) << nickname << "|" << RESET;

		std::cout << std::endl;
	}

	std::cout << GREEN << "\nEnter index to display: " << RESET;
	std::string str;
	std::getline(std::cin, str);
	if (std::cin.eof())
		return;

	int index = str[0] - '0';
	if (index < 0 || index >= this->_contactCount)
	{
		std::cout << RED << "Invalid index!" << RESET << std::endl;
		return ;
	}

	std::cout << GREEN << "\n--- Contact #" << index + 1<< " ---" << RESET << std::endl;
	this->_contacts[index].display();
}