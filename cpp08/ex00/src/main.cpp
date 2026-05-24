/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 11:17:35 by antbonin          #+#    #+#             */
/*   Updated: 2026/05/23 14:00:03 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"
# include <iostream>
# include <vector>

int main(void)
{
    std::vector<int> arrays;
    for (int i = 0; i < 15; i++)
    {
        arrays.push_back(i);
    }
    try
    {
        std::cout << *easyfind(arrays, 16) << "\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}