/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:43:57 by antbonin          #+#    #+#             */
/*   Updated: 2025/10/20 12:59:39 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"
#include <cstdlib>
#include <ctime>

Zombie* zombieHorde(int N, std::string name)
{
    if (N < 1)
        return (NULL);
    std::string names[10] = {
        name,
        "Marquis de Montclair", 
        "Duc de Beaumont",
        "Comte de Valencourt",
        "Baron von Habsburg",
        "Vicomte de Rothschild",
        "Lord Pemberton",
        "Sir Reginald Ashworth",
        "Lady Catherine de Medici",
        "Duchesse de Fontainebleau"
    };
    srand(time(NULL));
    Zombie *horde = new Zombie[N];
    if (!horde)
        return (NULL);
    for (int i = 0; i < N; i++)
    {
        int randomIndex = rand() % 10;
        horde[i].SetName(names[randomIndex]);
    }
    return horde;
}