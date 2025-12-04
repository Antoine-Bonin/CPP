/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 10:48:43 by antbonin          #+#    #+#             */
/*   Updated: 2025/11/25 15:12:43 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
  public:
	Cat();
	Cat(const std::string &name);
	Cat(const Cat &src);
	Cat &operator=(const Cat &src);
	~Cat();
	void makeSound() const;
};

#endif
