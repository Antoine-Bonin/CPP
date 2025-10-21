/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 17:38:32 by antbonin          #+#    #+#             */
/*   Updated: 2025/10/12 18:37:27 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon(const std::string &name) : _type(name)
{
}

Weapon::~Weapon()
{
}

void Weapon::setType(const std::string &name)
{
	this->_type = name;
}

const std::string Weapon::getType() const
{
	return (this->_type);
}