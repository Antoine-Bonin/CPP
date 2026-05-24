/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 19:17:58 by antbonin          #+#    #+#             */
/*   Updated: 2026/02/04 14:06:24 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _TEMPLATE_H
# define _TEMPLATE_H

template <typename T> 
void swap(T &a, T &b)
{
	T	temp;

	temp = a;
	a = b;
	b = temp;
}

template <typename T> 
T min(T &a, T &b)
{
    return (a < b ? a : b);
}

template <typename T> 
T max(T &a, T &b)
{
	return (a > b ? a : b);
}

#endif // _TEMPLATE_H