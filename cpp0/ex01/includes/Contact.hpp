/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:36:12 by antbonin          #+#    #+#             */
/*   Updated: 2025/10/09 16:47:07 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _phoneNumber;
    std::string _darkestSecret;

public:
    Contact();
    ~Contact();
    
    void setFirstName(const std::string &name);
    void setLastName(const std::string &name);
    void setNickname(const std::string &nickname);
    void setPhoneNumber(const std::string &phone);
    void setDarkestSecret(const std::string &secret);
    
    std::string getFirstName(void) const;
    std::string getLastName(void) const;
    std::string getNickname(void) const;
    std::string getPhoneNumber(void) const;
    std::string getDarkestSecret(void) const;
    
    bool isValid() const;
    void display() const;
};

#endif