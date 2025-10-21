/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 17:38:36 by antbonin          #+#    #+#             */
/*   Updated: 2025/10/12 18:38:27 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA
{
  private:
	std::string _name;
	Weapon &_weapon;

  public:
	HumanA(const std::string &name, Weapon &weapon);
	~HumanA();
	void attack() const;
};

#endif