/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:57:47 by antbonin          #+#    #+#             */
/*   Updated: 2025/10/22 19:28:00 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
  public:
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &src);
	ScavTrap &operator=(const ScavTrap &src);
	~ScavTrap();
	void attack(const std::string &target);
	void guardGate();
};

#endif