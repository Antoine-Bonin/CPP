/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:44:48 by antbonin          #+#    #+#             */
/*   Updated: 2025/10/09 16:46:57 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
  private:
	Contact _contacts[8];
	int _nextIndex;
	int _contactCount;

  public:
	PhoneBook();
	~PhoneBook();
  void addContact();
  void searchContact();
};

#endif