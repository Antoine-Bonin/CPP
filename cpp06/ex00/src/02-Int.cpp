/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02-Int.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 13:51:17 by antbonin          #+#    #+#             */
/*   Updated: 2026/03/16 14:29:16 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Number.hpp"
#include <climits>
#include <cerrno>
#include <cstdlib>

bool	isInt(const std::string &nbr, int &i)
{
	const char	*start = nbr.c_str();
	char		*end;
	long		v;

	errno = 0;
	v = std::strtol(start, &end, 10);
	if (v >= INT_MAX || v <= INT_MIN || errno == ERANGE || end == start || *end != '\0')
		return (false);
	i = static_cast<int>(v);
	return (true);
}

void	PrintFromInt(int &i)
{
	if (i < 0 || i > 127)
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(static_cast<unsigned char>(i)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
	return ;
}