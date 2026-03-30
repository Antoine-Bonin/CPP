/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03-Float.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 13:54:48 by antbonin          #+#    #+#             */
/*   Updated: 2026/02/03 14:11:32 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Number.hpp"
#include <climits>
#include <cerrno>
#include <cstdlib>

bool	isFloat(const std::string &nbr, float &f)
{
	const char	*start = nbr.c_str();
	char		*end;
	double		v;

	end = 0;
	errno = 0;
	v = std::strtod(start, &end);
	if (end == start)
		return (false);
	if (*end == 'f' && *(end + 1) == '\0')
	{
		f = static_cast<float>(v);
		return (errno != ERANGE);
	}
	return (false);
}

void    PrintFromFloat(float &f)
{
    if (f < 0 || f > 127)
			std::cout << "char: impossible" << std::endl;
		else if (!std::isprint(static_cast<unsigned char>(static_cast<int>(f))))
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;

		double df = static_cast<double>(f);
		if (isNan(df) || isInf(df)
			|| df < static_cast<double>(INT_MIN) || df > static_cast<double>(INT_MAX))
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(f) << std::endl;
		std::cout << "float: " << f;
		if (isIntegral(df))
			std::cout << ".0";
		std::cout << "f" << std::endl;
		std::cout << "double: " << df;
		if (isIntegral(df))
			std::cout << ".0";
		std::cout << std::endl;
    return ;
}