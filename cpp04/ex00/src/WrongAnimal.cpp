/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:23:23 by antbonin          #+#    #+#             */
/*   Updated: 2025/11/25 15:23:51 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("default WrongAnimal")
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &src): _type(src)
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
    *this = src;
    std::cout << "copy WrongAnimal constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &src)
{
    if (this != &src)
    {
        this->_type = src._type;
    }
    std::cout << "copy WrongAnimal assignement constructor called" << std::endl;
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "Salut c'est frank leboeuf" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (this->_type);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}