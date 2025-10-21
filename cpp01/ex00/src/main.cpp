/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 10:56:31 by antbonin          #+#    #+#             */
/*   Updated: 2025/10/15 19:17:05 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main(void)
{
    Zombie* zombie;
    zombie = newZombie("charles");
    if (!zombie)
        return (1);
    zombie->Announce();
    randomChump("louis");
    zombie->Announce();
    delete(zombie);
    return (0);
}