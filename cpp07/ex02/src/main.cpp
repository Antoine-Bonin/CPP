/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 15:48:49 by antbonin          #+#    #+#             */
/*   Updated: 2026/02/05 15:49:35 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Array.hpp"
#include <iostream>
#include <cstdlib>
#include "Array.hpp"

const char* name[10] = {"charles", "jean", "ethienne", "antoine", "mathieu", "quentin", "pablo", "charlie", "maxime", "ulysse"};

static void printcharArray(const Array<const char *>& b)
{
    std::cout << "name in the database :\n";
     for (std::size_t j = 0; j < b.size(); j++)
    {
        std::cout << b[j] << std::endl;
    }
}

static void printIntArray(const Array<int>& a, const char* name)
{
    std::cout << name << " (size=" << a.size() << "): ";
    for (std::size_t i = 0; i < a.size(); ++i)
        std::cout << a[i] << ' ';
    std::cout << "\n\n";
}

int main()
{
    Array<int> a(10);
    for (std::size_t i = 0; i < a.size(); i++)
    {
        a[i] = static_cast<int>(i * i);
    }
    printIntArray(a, "a");


    
    Array<const char *> b(10);
    for (std::size_t j = 0; j < b.size(); j++)
    {
        b[j] = name[j];
    }
    printcharArray(b);

}
