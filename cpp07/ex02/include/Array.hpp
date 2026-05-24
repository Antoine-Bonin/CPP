/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 15:46:19 by antbonin          #+#    #+#             */
/*   Updated: 2026/02/05 15:20:59 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ARRAY_H
# define _ARRAY_H

# include <cstddef>
# include <stdexcept>

template <typename T> class Array
{
  public:
	Array() : _data(NULL), _size(0)
	{
	}

	Array(unsigned int n) : _data(NULL), _size(static_cast<std::size_t>(n))
	{
		if (this->_size > 0)
			this->_data = new T[this->_size]();
	}

	Array(const Array &other) : _data(NULL), _size(other._size)
	{
		if (_size > 0)
			_data = new T[_size]();
		for (std::size_t i = 0; i < _size; ++i)
			_data[i] = other._data[i];
	}

	Array &operator=(const Array &other)
	{
		if (this == &other)
			return (*this);

		T *newData = NULL;
		if (other._size > 0)
			newData = new T[other._size]();

		for (std::size_t i = 0; i < other._size; ++i)
			newData[i] = other._data[i];

		delete[] this->_data;
		this->_data = newData;
		this->_size = other._size;
		return (*this);
	}
	T &operator[](unsigned int i)
	{
		if (i >= this->_size)
			throw std::out_of_range("out of range");
		return (this->_data[i]);
	}
	const T &operator[](unsigned int i) const
	{
		if (i >= this->_size)
			throw std::out_of_range("out of range");
		return (this->_data[i]);
	}
	std::size_t size() const
	{
		return (this->_size);
	}
	~Array()
	{
		delete[] this->_data;
	}

  private:
	T *_data;
	std::size_t _size;
};

#endif // _ARRAY_H