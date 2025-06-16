/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 14:28:53 by jbergfel          #+#    #+#             */
/*   Updated: 2025/06/16 14:21:10 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::~Array()
{
	if (_arr)
		delete[] _arr;
}

template <typename T>
Array<T>::Array() : _arr(NULL), _size(0)
{
}

template <typename T>
Array<T>::Array(std::size_t n) : _size(n)
{
	this->_arr = new T[n]();
}

template <typename T>
Array<T>::Array(const Array &src)
{
	if (this == &src)
		return;
	this->_size = src.getSize();
	this->_arr = new T[this->_size];
	for (std::size_t i = 0; i < this->_size; i++)
		this->_arr[i] = src._arr[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &src)
{
	if (this == &src)
		return (*this);
	if (this->_arr)
		delete[] this->_arr;
	this->_size = src.getSize();
	this->_arr = new T[this->_size];
	for (std::size_t i = 0; i < this->_size; i++)
		this->_arr[i] = src._arr[i];
	return (*this);
}

template <typename T>
T &Array<T>::operator[](std::size_t idx)
{
	if (!this->_arr)
		throw(EmptyArray());
	if (idx >= this->_size)
		throw(OutofBounds());
	return this->_arr[idx];
}

template <typename T>
const T &Array<T>::operator[](std::size_t n) const
{
	if (!this->_arr)
		throw (EmptyArray());
	if (this->_size <= n)
		throw (OutofBounds());
	return (this->_arr[n]);
}

template <typename T>
std::size_t Array<T>::getSize(void) const
{
	return (this->_size);
}
