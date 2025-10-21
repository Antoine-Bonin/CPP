/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:22:46 by antbonin          #+#    #+#             */
/*   Updated: 2025/10/20 18:39:40 by antbonin         ###   ########.fr       */
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
    this->_value = number << _bitsValue;
}

Fixed::Fixed(const float &number)
{
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

bool Fixed::operator!=(const Fixed &src) const
{
    return (this->_value != src._value);
}

bool Fixed::operator<(const Fixed &src) const
{
    return (this->_value < src._value);
}

bool Fixed::operator>(const Fixed &src) const
{
    return (this->_value > src._value);
}

bool Fixed::operator>=(const Fixed &src) const
{
    return (this->_value >= src._value);
}

bool Fixed::operator<=(const Fixed &src) const
{
    return (this->_value <= src._value);
}

bool Fixed::operator==(const Fixed &src) const
{
    return (this->_value == src._value);
}

Fixed Fixed::operator+(const Fixed &src) const
{
    Fixed value;
    value.setRawBits(this->_value + src._value);
    return (value);
}

Fixed Fixed::operator-(const Fixed &src) const
{
    Fixed value;
    value.setRawBits(this->_value - src._value);
    return (value);
}

Fixed Fixed::operator*(const Fixed &src) const
{
    Fixed value;
    value.setRawBits((this->_value * src._value) >> _bitsValue);
    return (value);
}

Fixed Fixed::operator/(const Fixed &src) const
{
    if (src._value)
        return (Fixed());
    Fixed value;
    value.setRawBits((this->_value << _bitsValue) / src._value);
    return (value);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator++(void)
{
    this->_value += 1;
    return(*this);
}

Fixed &Fixed::operator--(void)
{
    this->_value -= 1;
    return(*this);
}

Fixed Fixed::operator++(int)
{
    Fixed value(*this);
    this->_value += 1;
    return(value);
}

Fixed Fixed::operator--(int)
{
    Fixed value(*this);
    this->_value -= 1;
    return(value);
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

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b ? a : b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b ? a : b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b ? a : b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b ? a : b);
}

std::ostream &operator<<(std::ostream &out, const Fixed &src)
{
    out << src.toFloat();
    return (out);
}