/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:27:39 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/22 12:01:00 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default Constructor called" << std::endl;
	_numValue = 0;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = f;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_numValue);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_numValue = raw;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_numValue = rhs.getRawBits();
	return (*this);
}
