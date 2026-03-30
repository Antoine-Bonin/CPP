/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Number.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 13:51:33 by antbonin          #+#    #+#             */
/*   Updated: 2026/02/03 14:06:58 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUMBERS_HPP
# define NUMBERS_HPP
# include <iostream>

bool	isPseudoLiteral(const std::string &s);
void	PrintFromLiteral(const std::string nbr);

bool	isPseudoLiteralFloat(const std::string &s);
void	PrintFromLiteralFloat(const std::string nbr);

bool	isCharLiteral(const std::string &nbr);
void	PrintFromChar(const std::string nbr);

bool	isDouble(const std::string &nbr, double &d);
void	PrintFromDouble(double &d);

bool	isIntegral(double x);

bool	isInf(double x);
bool	isNan(double x);

bool	isInt(const std::string &nbr, int &i);
void	PrintFromInt(int &i);

bool	isFloat(const std::string &nbr, float &f);
void	PrintFromFloat(float &f);
#endif