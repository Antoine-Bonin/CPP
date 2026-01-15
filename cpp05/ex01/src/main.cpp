/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:36:13 by antbonin          #+#    #+#             */
/*   Updated: 2026/01/09 11:25:05 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat oui("oui", 149);
		oui.incrementGrade();
		std::cout << oui << std::endl;
		oui.decrementGrade();
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cout << "exception : " << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << "exception: " << e.what() << std::endl;
    }
	try {
		Bureaucrat non("non", 151);
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cout << "exception : " << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << "exception: " << e.what() << std::endl;
    }
	return 0;
}

