/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:07:09 by antbonin          #+#    #+#             */
/*   Updated: 2025/11/25 17:46:12 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
  private:
	Brain *brain;

  public:
	Dog();
	Dog(const std::string &name);
	Dog(const Dog &src);
	Dog &operator=(const Dog &src);
	~Dog();
	void makeSound() const;
};

#endif