/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 18:12:12 by antbonin          #+#    #+#             */
/*   Updated: 2026/01/15 16:24:10 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : _name("Bureaucrat"), _grade(75)
{
	std::cout << "default " << this->_name << "constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name),
	_grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	std::cout << this->_name << " constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name),
	_grade(src._grade)
{
	std::cout << this->_name <<  " copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	if (this != &src)
	{
		this->_grade = src._grade;
	}
	std::cout << this->_name << " operator= called" << std::endl;
	return (*this);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

void Bureaucrat::incrementGrade()
{
	if (this->_grade - 1 < 1)
		throw GradeTooHighException();
	this->_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade + 1 > 150)
		throw GradeTooLowException();
	this->_grade++;
}

void Bureaucrat::signForm(Form &src)
{
	try
	{
		src.beSigned(*this);
		std::cout << this->_name << " signed " << src.getName() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << this->_name <<" couldn't sign " << src.getName() << " because " << e.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat()
{
	std::cout <<  this->_name <<" destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade : " << bureaucrat.getGrade();
	return (out);
}