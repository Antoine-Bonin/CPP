/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:13:34 by antbonin          #+#    #+#             */
/*   Updated: 2025/10/20 12:58:15 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie* zombie = new Zombie();
    if (!zombie)
        return (NULL);
    zombie->SetName(name);
    return zombie;
}