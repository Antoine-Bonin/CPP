/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:06:23 by antbonin          #+#    #+#             */
/*   Updated: 2025/12/04 16:26:27 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog(): Animal("Dog")
{
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const std::string &src): Animal(src)
{
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &src)
{
    *this = src;
    std::cout << "copy dog constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &src)
{
    if (this != &src)
    {
        this->_type = src._type;
    }
    std::cout << "copy dog assignement constructor called" << std::endl;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Bark" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}