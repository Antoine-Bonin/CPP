/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:02:33 by antbonin          #+#    #+#             */
/*   Updated: 2025/10/22 18:48:57 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name): _name(name), _hitPoint(10), _energyPoint(10), _attackDmg(0)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(): _name("default"), _hitPoint(10), _energyPoint(10), _attackDmg(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
    {
        this->_name = src._name;
        this->_hitPoint = src._hitPoint;
        this->_energyPoint = src._energyPoint;
        this->_attackDmg = src._attackDmg;
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->_energyPoint >= 1 && this->_hitPoint != 0)
    {
        this->_energyPoint -= 1;
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing "
        << this->_attackDmg << " points of damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->_name << " can't attacks" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoint >= 1 && this->_hitPoint != 0)
    {
        this->_energyPoint -= 1;
        this->_hitPoint += amount;
        std::cout << "ClapTrap " << this->_name << " repaired himself" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->_name << " can't repair himself" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoint != 0)
    {
        if (amount >= this->_hitPoint)
            this->_hitPoint = 0;
        else
            this->_hitPoint -= amount;
        std::cout << "ClapTrap " << this->_name << " took " << amount 
                    << " damages hp left : "<< this->_hitPoint << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->_name << " is already dead"<< std::endl;
}