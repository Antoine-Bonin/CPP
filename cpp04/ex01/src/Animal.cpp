/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:41:45 by antbonin          #+#    #+#             */
/*   Updated: 2025/12/04 16:13:40 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("default animal")
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const std::string &src): _type(src)
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &src)
{
    std::cout << "copy animal constructor called" << std::endl;
    *this = src;
}

Animal& Animal::operator=(const Animal &src)
{
    if (this != &src)
    {
        this->_type = src._type;
    }
    std::cout << "copy animal assignement constructor called" << std::endl;
    return (*this);
}

void Animal::makeSound() const
{
    std::cout << "Salut c'est frank leboeuf" << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->_type);
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}