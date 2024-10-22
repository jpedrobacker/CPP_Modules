/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:09:15 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/22 12:32:37 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default Constructor called" << std::endl;

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

Fixed::Fixed(const int i)
{
	std::cout << "Int Constructor called" << std::endl;
	_numValue = i << _fb;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float Constructor called" << std::endl;
	_numValue = (int)roundf(f * (1 << _fb));
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_numValue);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_numValue = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)_numValue / (float)(1 << _fb));
}

int	Fixed::toInt(void) const
{
	return (_numValue >> _fb);
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_numValue = rhs.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &os, Fixed const &rhs)
{
	os << rhs.toFloat();
	return (os);
}
