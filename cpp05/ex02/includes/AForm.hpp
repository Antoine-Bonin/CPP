/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 11:28:02 by antbonin          #+#    #+#             */
/*   Updated: 2026/01/15 17:00:41 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class	Bureaucrat;

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
	Form(const std::string &name, int sign_grade, int execute_grade);
	Form &operator=(const Form &src);
	virtual void execute(Bureaucrat const & executor) const = 0;
	virtual ~Form();
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
	void beSigned(const Bureaucrat &src);
	int getSignGrade() const;
	int getExecuteGrade() const;
	bool getSignature() const;
	std::string getName() const;
};

std::ostream &operator<<(std::ostream &out, const Form &src);

#endif