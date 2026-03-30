/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 14:25:58 by antbonin          #+#    #+#             */
/*   Updated: 2026/02/02 14:58:47 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error\nTo use the converter: ./convert <string>\n";
        return 1;
	}
    ScalarConverter::convert(av[1]);
}