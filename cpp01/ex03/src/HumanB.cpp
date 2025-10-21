/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 17:57:48 by antbonin          #+#    #+#             */
/*   Updated: 2025/10/15 19:12:12 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

HumanB::HumanB(const std::string &name): _name(name), _weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void    HumanB::setWeapon(Weapon *weapon)
{
    this->_weapon = weapon;
}

void    HumanB::attack() const
{
    if (this->_weapon)
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    else
        std::cout << this->_name << " has no weapon to attack with" << std::endl;
}
