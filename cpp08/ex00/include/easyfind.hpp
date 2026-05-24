/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 11:48:58 by antbonin          #+#    #+#             */
/*   Updated: 2026/05/23 14:00:14 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _EASYFIND_H
# define _EASYFIND_H

# include <exception>
# include <algorithm>

class notFoundException : public std::exception
{
    public:
        virtual const char* what() const throw() 
        {
            return "Occurence not found in container";
        }
};

template <typename T>
typename T::iterator easyfind(T& container, int target)
{
    typename T::iterator it = std::find(container.begin(), container.end(), target);
    if (it == container.end())
        throw notFoundException();
    return (it);
}  


#endif // _EASYFIND_H