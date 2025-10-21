/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 10:42:47 by antbonin          #+#    #+#             */
/*   Updated: 2025/10/11 16:33:02 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include "iostream"

class Zombie
{
private:
    std::string _name;

public:
    Zombie();
    ~Zombie();
    void  SetName(std::string name) ;
    void  Announce(void) ;
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif