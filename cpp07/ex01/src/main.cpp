/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 14:13:16 by antbonin          #+#    #+#             */
/*   Updated: 2026/03/30 15:07:46 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"
#include <cstring>
#include <iostream>
#include <cstdlib>

static void printChar(const char& c)
{
    std::cout << c;
}

static void printint(const int &c)
{
    std::cout << "int is : " << c << std::endl;
}

int main(void)
{
    const char string[] = "normalement ca marche\n";
    const std::size_t len = strlen(string);

    iter(string, len, printChar);

    int init[] = {1, 2, 3, 4, 5, 6};
    std::size_t lenInt = sizeof(init) / sizeof(init[0]);
    
    iter(init, lenInt, printint);
    
    return 0;
}