/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:22:46 by antbonin          #+#    #+#             */
/*   Updated: 2025/10/21 15:53:51 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Fixed.hpp"
#include "iostream"
#include "cmath"

const int Fixed::_bitsValue = 8;

Fixed::Fixed(): _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int &number)
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = number << _bitsValue;
}

Fixed::Fixed(const float &number)
{
    std::cout << "Float constructor called" << std::endl;
    this->_value = (int)roundf(number * 256.0f);
}

Fixed::Fixed(const Fixed &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed &Fixed::operator=(const Fixed &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
    {
        this->_value = src._value;
    }
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void)const
{
    return (this->_value);
}

void    Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

float   Fixed::toFloat(void) const
{
    return (this->_value / 256.0f);
}

int Fixed::toInt(void) const
{
    return (this->_value >> this->_bitsValue);
}

std::ostream &operator<<(std::ostream &out, const Fixed &src)
{
    out << src.toFloat();
    return (out);
}