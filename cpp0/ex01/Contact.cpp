/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:36:42 by antbonin          #+#    #+#             */
/*   Updated: 2025/10/09 17:36:33 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Contact.hpp"
#include "includes/Colors.hpp"
#include "iostream"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

void Contact::setFirstName(const std::string &name)
{
    this->_firstName = name;
}

void Contact::setLastName(const std::string &name)
{
    this->_lastName = name;
}

void Contact::setNickname(const std::string &nickname)
{
    this->_nickname = nickname;
}

void Contact::setPhoneNumber(const std::string &phone)
{
    this->_phoneNumber = phone;
}

void Contact::setDarkestSecret(const std::string &secret)
{
    this->_darkestSecret = secret;
}

std::string Contact::getFirstName(void) const
{
    return this->_firstName;
}

std::string Contact::getLastName(void) const
{
    return this->_lastName;
}

std::string Contact::getNickname(void) const
{
    return this->_nickname;
}

std::string Contact::getPhoneNumber(void) const
{
    return this->_phoneNumber;
}

std::string Contact::getDarkestSecret(void) const
{
    return this->_darkestSecret;
}

bool Contact::isValid(void) const
{
    if (this->_firstName.empty())
        return (false);
    if (this->_lastName.empty())
        return (false);
    if (this->_nickname.empty())
        return (false);
    if (this->_phoneNumber.empty())
        return (false);
    if (this->_darkestSecret.empty())
        return (false);
    return (true);
}

void Contact::display(void) const
{
    std::cout << BLUE << "First Name: " << this->_firstName << RESET << std::endl;
    std::cout << BLUE << "Last Name: " << this->_lastName << RESET << std::endl;
    std::cout << BLUE << "Nickname: " << this->_nickname << RESET << std::endl;
    std::cout << BLUE << "Phone Number: " << this->_phoneNumber << RESET << std::endl;
    std::cout << BLUE << "Darkest Secret: " << this->_darkestSecret << RESET << std::endl;
}