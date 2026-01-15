/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 11:28:02 by antbonin          #+#    #+#             */
/*   Updated: 2026/01/09 12:56:14 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Form
{
  private:
	const std::string _name;
	bool _is_signed;
	const int _sign_grade;
	const int _execute_grade;

  public:
  Form();
  Form(const Form &src);
  Form& operator=(const Form &src);
  ~Form();
	class GradeTooHighException : public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return ("Grade is too high!");
		}
	};
	class GradeTooLowException : public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return ("Grade is too low!");
		}
	};
    int getSignGrade()const;
    int getExecuteGrade() const;
    bool getSignature() const;
    std::string getName()const;
};

#endif