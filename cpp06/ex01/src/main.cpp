/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 14:25:58 by antbonin          #+#    #+#             */
/*   Updated: 2026/02/03 14:54:05 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int	main(void)
{
	Data data;
	data.value = 42;

	Data *ptr = &data;
	uintptr_t raw = Serializer::serialize(ptr);
	Data *back = Serializer::deserialize(raw);

	std::cout << "Original value : " << data.value << std::endl;
	std::cout << "Original ptr: " << ptr << std::endl;
	std::cout << "Serialized : " << raw << std::endl;
	std::cout << "Deserialized: " << back << std::endl;
	std::cout << "Value: " << back->value << std::endl;
	return 0;
}