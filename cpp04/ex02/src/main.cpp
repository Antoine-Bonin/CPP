/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:10:18 by antbonin          #+#    #+#             */
/*   Updated: 2025/12/04 16:03:24 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	Animal *array[100];
	for (size_t i = 0; i < 50; i++)
	{
		array[i] = new Dog();
	}
	for (size_t i = 50; i < 100; i++)
	{
		array[i] = new Cat();
	}
	array[0]->makeSound();
	array[99]->makeSound();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	delete j;
	delete i;
	for (size_t i = 0; i < 100; i++)
	{
		delete array[i];
	}
	return (0);
}