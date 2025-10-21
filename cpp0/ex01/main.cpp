/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:46:30 by antbonin          #+#    #+#             */
/*   Updated: 2025/10/11 11:23:40 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PhoneBook.hpp"
#include "includes/Colors.hpp"
#include <iostream>

int main(void)
{
    PhoneBook phoneBook;
    std::string command;

    while (true)
    {
        std::cout << GREEN << "Enter command (ADD, SEARCH, EXIT): " << RESET;
        std::getline(std::cin, command);
        if (std::cin.eof()) {
            break;
        }
        
        if (command == "ADD") {
            phoneBook.addContact();
            if (std::cin.eof()) {
                break;
            }
        }
        else if (command == "SEARCH")
            phoneBook.searchContact();
        else if (command == "EXIT")
        {
            std::cout << YELLOW << "Goodbye!" << std::endl << RESET;
            break;
        }
        else
            std::cout << RED << "Invalid command. Use ADD, SEARCH or EXIT." << RESET << std::endl;
        std::cout << std::endl;
    }
    
    return 0;
}