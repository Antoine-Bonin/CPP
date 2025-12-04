/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:25:21 by antbonin          #+#    #+#             */
/*   Updated: 2025/11/25 15:25:35 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const std::string &src): WrongAnimal(src)
{
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src)
{
    *this = src;
    std::cout << "copy WrongCat constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &src)
{
    if (this != &src)
    {
        this->_type = src._type;
    }
    std::cout << "copy WrongCat assignement constructor called" << std::endl;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}