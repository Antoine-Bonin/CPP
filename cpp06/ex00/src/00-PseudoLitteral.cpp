/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PseudoLitteral.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 14:03:32 by antbonin          #+#    #+#             */
/*   Updated: 2026/02/03 14:05:32 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Number.hpp"

bool	isPseudoLiteral(const std::string &s)
{
	return (s == "nan" || s == "+inf" || s == "-inf");
}

bool	isPseudoLiteralFloat(const std::string &s)
{
	return (s == "nanf" || s == "+inff" || s == "-inff");
}

void	PrintFromLiteral(const std::string nbr)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << nbr << "f" << std::endl;
	std::cout << "double: " << nbr << std::endl;
	return ;
}

void	PrintFromLiteralFloat(const std::string nbr)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << nbr << std::endl;
	std::cout << "double: " << nbr.substr(0, nbr.size() - 1) << std::endl;
	return ;
}