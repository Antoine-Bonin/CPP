/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:14:20 by antbonin          #+#    #+#             */
/*   Updated: 2025/10/21 14:20:48 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int main (int ac, char **av)
{
    if (ac > 2)
    {
        std::string player1 = av[1];
        std::string player2 = av[2];
        ClapTrap claptrap1(player1);
        ClapTrap claptrap2(player2);
        claptrap1.attack(player2);
        claptrap2.takeDamage(1);
        claptrap2.beRepaired(1);
        claptrap1.attack(player2);
        claptrap2.takeDamage(20);
        claptrap2.beRepaired(1);
    }
}