/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 13:51:16 by antbonin          #+#    #+#             */
/*   Updated: 2025/12/04 16:12:45 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("cat")
{
    this->brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const std::string &src): Animal(src)
{
    this->brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &src): Animal(src)
{
    this->brain = new Brain(*src.brain);
    std::cout << "copy cat constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &src)
{
    if (this != &src)
    {
        this->_type = src._type;
        *this->brain = *src.brain;
    }
    std::cout << "copy cat assignement constructor called" << std::endl;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat destructor called" << std::endl;
}