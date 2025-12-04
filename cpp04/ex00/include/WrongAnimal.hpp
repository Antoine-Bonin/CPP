/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:17:18 by antbonin          #+#    #+#             */
/*   Updated: 2025/12/04 16:18:16 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
    protected:
    std::string _type;

    public:
    WrongAnimal();
    WrongAnimal(const std::string &type);
    WrongAnimal(const WrongAnimal &src);
    WrongAnimal &operator=(const WrongAnimal &src);
    void makeSound() const;
    std::string getType(void)const;
    ~WrongAnimal();
};

#endif