/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:24:43 by antbonin          #+#    #+#             */
/*   Updated: 2025/11/25 15:25:09 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
  public:
	WrongCat();
	WrongCat(const std::string &name);
	WrongCat(const WrongCat &src);
	WrongCat &operator=(const WrongCat &src);
	~WrongCat();
	void makeSound() const;
};

#endif