/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:36:13 by antbonin          #+#    #+#             */
/*   Updated: 2026/01/15 15:35:28 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Form formA("FormA", 50, 25);
		std::cout << formA << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Form formB("FormB", 0, 100);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Form formC("FormC", 151, 100);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat alice("Alice", 40);
		Form formD("FormD", 50, 25);
		std::cout << formD << std::endl;
		alice.signForm(formD);
		std::cout << formD << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat bob("Bob", 60);
		Form formE("FormE", 50, 25);
		std::cout << formE << std::endl;
		bob.signForm(formE);
		std::cout << formE << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	return (0);
}
