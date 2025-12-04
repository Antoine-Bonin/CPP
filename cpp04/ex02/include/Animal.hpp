/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:53:05 by antbonin          #+#    #+#             */
/*   Updated: 2025/12/04 14:42:35 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP


#include <iostream>
#include <string>

class Animal
{
    protected:
    std::string _type;

    public:
    Animal();
    Animal(const std::string &type);
    Animal(const Animal &src);
    Animal &operator=(const Animal &src);
    virtual void makeSound() const = 0;
    std::string getType(void)const;
    virtual ~Animal();
    
};

#endif