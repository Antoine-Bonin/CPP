/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:37:41 by antbonin          #+#    #+#             */
/*   Updated: 2025/10/22 19:30:15 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    this->_energyPoint = 100;
    this->_hitPoint = 100;
    this->_attackDmg = 30;
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src)
{
    *this = src;
}

FragTrap& FragTrap::operator=(const FragTrap &src)
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

FragTrap::~FragTrap()
{
     std::cout << "FragTrap destructor called before ClapTrap" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "positive high five request" << std::endl;
}
