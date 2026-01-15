/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 13:01:14 by antbonin          #+#    #+#             */
/*   Updated: 2026/01/09 17:07:29 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Form"), _is_signed(false), _sign_grade(1),
	_execute_grade(1)
{
	std::cout << "default Form constructor called" << std::endl;
}

Form &Form::operator=(const Form &src)
{
	if (this != &src)
	{
		this->_is_signed = src._is_signed;
	}
    std::cout << "overload operator = Form called" << std::endl;
	return (*this);
}

Form::Form(const Form &src) : _name(src._name), _is_signed(src._is_signed),
	_sign_grade(src._sign_grade), _execute_grade(src._execute_grade)
{
	std::cout << "copy constructor Form called" << std::endl;
}

int	Form::getExecuteGrade()const
{
	
}

int Form::getSignGrade()const
{

}

Form::~Form()
{
    std::cout << "destructor Form called" << std::endl;
}