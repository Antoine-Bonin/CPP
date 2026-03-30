/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IsIntegral.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 13:58:22 by antbonin          #+#    #+#             */
/*   Updated: 2026/02/03 13:58:40 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Number.hpp"

bool	isIntegral(double x)
{
	if (isNan(x) || isInf(x))
		return (false);
	long long ll = static_cast<long long>(x);
	return (static_cast<double>(ll) == x);
}