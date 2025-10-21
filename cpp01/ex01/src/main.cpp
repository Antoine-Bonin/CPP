/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 10:56:31 by antbonin          #+#    #+#             */
/*   Updated: 2025/10/20 12:59:12 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main(void)
{
    int N = 10;
    Zombie *zombie;
    zombie = zombieHorde(N, "ouistiti");
    if (!zombie)
        return (1);
    for (int i = 0; i < N; i++)
    {
        zombie[i].Announce();
    }
    delete[] zombie;
    return (0);
}