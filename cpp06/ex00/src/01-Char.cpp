/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Char.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 14:01:42 by antbonin          #+#    #+#             */
/*   Updated: 2026/02/03 14:06:48 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Number.hpp"

bool	isCharLiteral(const std::string &nbr)
{
	return (nbr.size() == 1
		&& !std::isdigit(static_cast<unsigned char>(nbr[0])));
}

void	PrintFromChar(const std::string nbr)
{
	char c = nbr[0];
	if (std::isprint(static_cast<unsigned char>(c)))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
	return ;
}