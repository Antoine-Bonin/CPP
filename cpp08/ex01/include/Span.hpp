/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 11:50:58 by antbonin          #+#    #+#             */
/*   Updated: 2026/05/23 19:21:03 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _SPAN_H
# define _SPAN_H
# include <vector>
# include <exception>
# include <iostream>
# include <algorithm>

class span_exception : public std::exception
{
private : 
 std::string error;
public:

    span_exception(const std::string &src) : error(src) {};
	virtual ~span_exception() throw() {};
    virtual const char* what() const throw() 
    {
        return error.c_str();
    }
};

class Span
{
 private:
    unsigned int        N;
    std::vector<int>    array;
     
public:

    Span(unsigned int Nbr = 64);
	
    void 			addNumber(int Nbr);
    unsigned int 	shortestSpan();
    unsigned int 	longestSpan();
	void			PrintSpan();
	void			insertFromTo(int start, unsigned int max);
	unsigned int 	getMaxTotal();
};

#endif // _SPAN_H