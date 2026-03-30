/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04-Double.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 13:59:45 by antbonin          #+#    #+#             */
/*   Updated: 2026/02/03 14:11:39 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Number.hpp"
#include <climits>
#include <cerrno>
#include <cstdlib>

bool	isDouble(const std::string &nbr, double &d)
{
	const char	*start = nbr.c_str();
	char		*end;

	end = 0;
	errno = 0;
	d = std::strtod(start, &end);
	if (end == start || *end != '\0' || errno == ERANGE)
		return (false);
	return (true);
}

void PrintFromDouble(double &d)
{
    if (d < 0 || d > 127)
			std::cout << "char: impossible" << std::endl;
		else if (!std::isprint(static_cast<unsigned char>(static_cast<int>(d))))
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;

		if (isNan(d) || isInf(d)
			|| d < static_cast<double>(INT_MIN) || d > static_cast<double>(INT_MAX))
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(d) << std::endl;
		float fd = static_cast<float>(d);
		std::cout << "float: " << fd;
		if (isIntegral(d))
			std::cout << ".0";
		std::cout << "f" << std::endl;
		std::cout << "double: " << d;
		if (isIntegral(d))
			std::cout << ".0";
		std::cout << std::endl;
}
