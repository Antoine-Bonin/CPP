/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:03:11 by antbonin          #+#    #+#             */
/*   Updated: 2025/10/11 16:32:58 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << this->_name << " got destroyed" << std::endl;
}

void    Zombie::SetName(std::string name)
{
    this->_name = name;
}

void    Zombie::Announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}