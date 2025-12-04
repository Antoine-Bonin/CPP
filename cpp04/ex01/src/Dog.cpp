/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:06:23 by antbonin          #+#    #+#             */
/*   Updated: 2025/12/04 16:13:16 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"


Dog::Dog(): Animal("Dog")
{
    this->brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const std::string &src): Animal(src)
{
    this->brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &src): Animal(src)
{
    this->brain = new Brain(*src.brain);
    std::cout << "copy dog constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &src)
{
    if (this != &src)
    {
        *this->brain = *src.brain;
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
    delete this->brain;
    std::cout << "Dog destructor called" << std::endl;
}