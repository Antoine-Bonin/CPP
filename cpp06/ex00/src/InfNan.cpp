/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InfNan.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 13:57:35 by antbonin          #+#    #+#             */
/*   Updated: 2026/02/03 13:59:31 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Number.hpp"
#include <cmath>

bool	isNan(double x)
{
	return (x != x);
}

bool	isInf(double x)
{
	return (x == HUGE_VAL || x == -HUGE_VAL);
}