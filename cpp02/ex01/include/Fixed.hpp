/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:20:11 by antbonin          #+#    #+#             */
/*   Updated: 2025/10/21 15:53:54 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
  private:
	int _value;
	static const int _bitsValue;

  public:
  Fixed();
  Fixed(const int &number);
  Fixed(const float &number);
  Fixed(const Fixed &src);
  Fixed &operator=(const Fixed &src);
  
  ~Fixed();
  int getRawBits(void) const;
  void  setRawBits(int const raw);

  float toFloat(void) const;
  int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &src);

#endif