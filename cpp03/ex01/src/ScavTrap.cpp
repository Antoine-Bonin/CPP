/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:46:45 by antbonin          #+#    #+#             */
/*   Updated: 2025/10/22 19:31:26 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name)
{
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    this->_attackDmg = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
    *this = src;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &src)
{
    if (this != &src)
    {
        this->_name = src._name;
        this->_hitPoint = src._hitPoint;
        this->_energyPoint = src._energyPoint;
        this->_attackDmg = src._attackDmg;
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (this->_energyPoint >= 1 && this->_hitPoint != 0)
    {
        this->_energyPoint -= 1;
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing "
        << this->_attackDmg << " points of damage!" << std::endl;
    }
    else
        std::cout << "ScavTrap " << this->_name << " can't attacks" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " is now in gate keeper mode" << std::endl;
}
