/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 08:49:40 by jbergfel          #+#    #+#             */
/*   Updated: 2025/06/24 15:05:09 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::~Span()
{}

Span::Span()
{}

Span::Span(unsigned int n)
{
	this->_storage.reserve(n);
	std::cout << "Vector capacity setted to: " << this->_storage.capacity() << std::endl;
}

Span::Span(const Span &src)
{
	*this = src;
}

Span	Span::operator=(const Span &src)
{
	if (this != &src)
		this->_storage = src._storage;
	return (*this);
}

void	Span::addNumber(unsigned int n)
{
	if (_storage.size() >= _storage.capacity())
		throw ("out of limits!");
	_storage.push_back(n);
	std::cout << n << " added to the storage!" << std::endl;
}

unsigned int	Span::longestSpan()
{
	if (_storage.size() < 2)
		throw ("No additional Span!");
	std::vector<int> temp = _storage;
	std::sort(temp.begin(), temp.end());
	return (temp.back() - temp.front());
}

unsigned int	Span::shortestSpan()
{
	if (_storage.size() < 2)
		throw ("No additional Span!");
	std::vector<int> temp = _storage;
	std::sort(temp.begin(), temp.end());
	unsigned int minSpan = static_cast<unsigned int> (temp[1] - temp[0]);
	for (size_t x = 0; x < _storage.size(); x++)
	{
		unsigned int span = static_cast<unsigned int> (temp[x + 1] - temp[x]);
		if (span < minSpan)
			minSpan = span;
	}
	return (minSpan);
}

void	Span::printStorage(void)
{
	std::cout << "Storage elements: " << std::endl;
	for (unsigned int x = 0; x < this->_storage.size(); x++)
		std::cout << this->_storage.at(x) << std::endl;
}
