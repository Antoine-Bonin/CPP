/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 14:26:12 by antbonin          #+#    #+#             */
/*   Updated: 2026/03/06 18:12:40 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Number.hpp"
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	return ;
}
ScalarConverter::ScalarConverter(const ScalarConverter &)
{
	return ;
}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &)
{
	return (*this);
}
ScalarConverter::~ScalarConverter()
{
	return ;
}

void ScalarConverter::convert(const std::string &nbr)
{
	if (isPseudoLiteral(nbr))
	{
		PrintFromLiteral(nbr);
		return ;
	}
	if (isPseudoLiteralFloat(nbr))
	{
		PrintFromLiteralFloat(nbr);
		return ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
	}
	if (isCharLiteral(nbr))
	{
		PrintFromChar(nbr);
		return ;
	}
	int i;
	if (isInt(nbr, i))
	{
		PrintFromInt(i);
		return ;
	}
	float f;
	if (isFloat(nbr, f))
	{
		PrintFromFloat(f);
		return ;
	}
	double d;
	if (isDouble(nbr, d))
	{
		PrintFromDouble(d);
		return ;
	}
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
	return ;
}