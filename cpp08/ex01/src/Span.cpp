/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 16:53:17 by antbonin          #+#    #+#             */
/*   Updated: 2026/05/23 19:22:04 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int Nbr)
{
	this->N = Nbr;
	array.reserve(Nbr);
}
void	Span::addNumber(int Nbr)
{
	if (array.size() >= this->N)
		throw span_exception("Error: maximum number stocked inside the span\n");
	array.push_back(Nbr);
}
unsigned int Span::shortestSpan()
{
	if (array.size() < 2)
		throw span_exception("error minimum of 2 number to get the min span\n");
	std::vector<int> copy = array;
	std::sort(copy.begin(), copy.end());
	unsigned min_span = 4294967295;
	for (size_t i = 0; i < copy.size() - 1; ++i)
	{
		long long diff = static_cast<long long>(copy[i + 1])
			- static_cast<long long>(copy[i]);
		unsigned int current_span = static_cast<unsigned int>(diff);
		if (current_span < min_span)
			min_span = current_span;
	}
	return (min_span);
}

unsigned int Span::longestSpan()
{
	if (array.size() < 2)
		throw span_exception("error minimum of 2 number to get the max span\n");
	int min = *std::min_element(array.begin(), array.end());
	int max = *std::max_element(array.begin(), array.end());
	long long distance = static_cast<long long>(max) - static_cast<long long>(min);
	return (static_cast<unsigned int>(distance));
}

void Span::PrintSpan()
{
	std::vector<int>::iterator it = array.begin();
	if (it == array.end())
		throw span_exception("nothing to print here\n");
	std::cout << "Array : ";
	while (it != array.end())
	{
		std::cout << "[" << *it << "] ";
		it++;
	}
	std::cout << std::endl;
}

void Span::insertFromTo(int start, unsigned int max)
{
	if (max > this->N)
		throw span_exception("Error: too much number to store");
	for (unsigned int i = 0; i < max; i++)
	{
		this->addNumber(start);
		start++;
	}
}

unsigned int Span::getMaxTotal()
{
	return (this->N);
}
