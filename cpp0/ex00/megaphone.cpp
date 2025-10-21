/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:57:01 by antbonin          #+#    #+#             */
/*   Updated: 2025/10/07 15:26:37 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

int main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for (int i = 1; i < ac; i++)
    {
        std::string str = av[i];
        for (int j = 0; j < (int)str.length(); j++)
        std::cout << (char)std::toupper(str[j]);
    }
    std::cout << std::endl;
    return (0);
}