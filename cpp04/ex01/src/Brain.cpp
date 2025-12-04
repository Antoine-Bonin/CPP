/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:51:57 by antbonin          #+#    #+#             */
/*   Updated: 2025/12/04 16:13:32 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &src)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
}

Brain &Brain::operator=(const Brain &src)
{
    if (this != &src)
    {
        for (int i = 0; i < 100; i++)
        {
            this->ideas[i] = src.ideas[i];
        }
    }
    std::cout << "Brain copy assignment operator called" << std::endl;
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}