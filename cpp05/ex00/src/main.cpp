/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:36:13 by antbonin          #+#    #+#             */
/*   Updated: 2026/01/15 16:28:36 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat tooGood("tooGood", 0);
		tooGood.incrementGrade();
		std::cout << tooGood << std::endl;
		tooGood.decrementGrade();
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "exception : " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat good("good", 149);
		good.incrementGrade();
		std::cout << good << std::endl;
		good.decrementGrade();
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "exception : " << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "exception: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat non("non", 151);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "exception : " << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "exception: " << e.what() << std::endl;
	}
	return (0);
}
