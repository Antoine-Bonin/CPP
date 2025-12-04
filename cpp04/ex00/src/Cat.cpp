/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 13:51:16 by antbonin          #+#    #+#             */
/*   Updated: 2025/12/04 16:26:35 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("cat")
{
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const std::string &src): Animal(src)
{
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &src)
{
    *this = src;
    std::cout << "copy cat constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &src)
{
    if (this != &src)
    {
        this->_type = src._type;
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
    std::cout << "Cat destructor called" << std::endl;
}