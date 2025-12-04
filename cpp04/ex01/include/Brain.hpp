/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:42:23 by antbonin          #+#    #+#             */
/*   Updated: 2025/11/25 16:51:11 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
  private:
	std::string ideas[100];

  public:
	Brain();
	Brain(const Brain &src);
	Brain &operator=(const Brain &src);
	~Brain();
};

#endif