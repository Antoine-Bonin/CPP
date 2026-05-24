/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 16:22:46 by antbonin          #+#    #+#             */
/*   Updated: 2026/05/23 19:21:56 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"
# include <climits>

int main (void)
{
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "------------------------Sp------------------------\n";
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		Span span;
		for (unsigned int i = 0; i < span.getMaxTotal() - 1; i++)
		{
			span.addNumber(i + 256);
		}
		std::cout << "------------------------Span------------------------\n";
		span.PrintSpan();
		std::cout << " shortest limit is : " << span.shortestSpan() << std::endl;
		std::cout << " longest limit is : " << span.longestSpan() << std::endl;

		Span limit(2);
		limit.addNumber(INT_MAX);
		limit.addNumber(INT_MIN);
		std::cout << "\n------------------------Limit------------------------:\n";
		limit.PrintSpan();
		std::cout << " shortest limit is : " << limit.shortestSpan() << std::endl;
		std::cout << " longest limit is : " << limit.longestSpan() << std::endl;


		std::cout << "\n------------------------Limitss------------------------:\n";
		Span limitss(100);
		limitss.insertFromTo(5, 99);
		limitss.PrintSpan();
	}
	catch (span_exception& e)
	{
		std::cout << e.what();
	}
}