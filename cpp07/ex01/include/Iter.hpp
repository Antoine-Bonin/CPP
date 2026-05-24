/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 19:49:41 by antbonin          #+#    #+#             */
/*   Updated: 2026/02/04 15:14:50 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _ITER_H
# define _ITER_H
#include <cstddef>

template <typename T>
void    iter(T* array, std::size_t length, void (*f)(T&))
{
    if (!array || !f)
        return;
    for (std::size_t i = 0; i < length; ++i)
        f(array[i]);
}

template <typename T>
void    iter(const T* array, const std::size_t length, void (*f)(const T&))
{
    if (!array || !f)
        return;
    for (std::size_t i = 0; i < length; ++i)
        f(array[i]);
}

#endif // _ITER_H