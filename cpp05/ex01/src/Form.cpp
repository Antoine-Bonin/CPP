/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 13:01:14 by antbonin          #+#    #+#             */
/*   Updated: 2026/01/15 16:22:12 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form() : _name("Form"), _is_signed(false), _sign_grade(1),
	_execute_grade(1)
{
	std::cout << "default Form constructor called" << std::endl;
}

Form::Form(const std::string &name, int sign_grade, int execute_grade) : _name(name), _is_signed(false),
	_sign_grade(sign_grade), _execute_grade(execute_grade)
{
	std::cout << this->_name << " constructor called" << std::endl;
	if (sign_grade < 1 || execute_grade < 1)
		throw GradeTooHighException();
	if (sign_grade > 150|| execute_grade > 150)
		throw GradeTooLowException();
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

void Form::beSigned(const Bureaucrat &src)
{
	if (src.getGrade() > this->_sign_grade)
		throw GradeTooLowException();
	this->_is_signed = true;
}

int Form::getExecuteGrade() const
{
	return (this->_execute_grade);
}

int Form::getSignGrade() const
{
	return (this->_sign_grade);
}

std::string Form::getName() const
{
	return (this->_name);
}

bool Form::getSignature() const
{
	return (this->_is_signed);
}

Form::~Form()
{
	std::cout << "destructor " << this->_name << " called " << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Form &src)
{
	out << src.getName() << ", Form sign grade : " << src.getSignGrade() << std::endl <<
	 "Execute grade : " << src.getExecuteGrade() << std::endl
	 <<"Is signed : " << src.getSignature() << std::endl;
	return (out);
}