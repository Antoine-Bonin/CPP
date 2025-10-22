/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:29:53 by antbonin          #+#    #+#             */
/*   Updated: 2025/10/22 19:27:58 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
  public:
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &src);
	FragTrap &operator=(const FragTrap &src);
	~FragTrap();

	void highFivesGuys(void);
};

#endif