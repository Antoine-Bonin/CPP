/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 14:25:58 by antbonin          #+#    #+#             */
/*   Updated: 2026/02/03 18:57:47 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "Base.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

Base	*generate(void)
{
	int	r;

	r = rand() % 3;
	if (r == 0)
		return (new A());
	else if (r == 1)
		return (new B());
	return (new C());
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch (const std::exception &)
	{
	}
	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch (const std::exception &)
	{
	}
	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch (const std::exception &)
	{
	}
}

int	main(void)
{
	srand(time(NULL));

	Base *A = generate();
	Base *B = generate();
	Base *C = generate();
	identify(*A);
	identify(*B);
	identify(*C);

	identify(A);
	identify(B);
	identify(C);
	return (0);
}