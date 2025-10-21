/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 17:38:34 by antbonin          #+#    #+#             */
/*   Updated: 2025/10/15 19:12:06 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB
{
  private:
	std::string _name;
	Weapon *_weapon;

  public:
	HumanB(const std::string &name);
	~HumanB();
	void attack() const;
	void setWeapon(Weapon *weapon);
};

#endif