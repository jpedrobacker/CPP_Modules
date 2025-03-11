/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:39:41 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/22 16:45:01 by jbergfel         ###   ########.fr       */
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

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (b.getRawBits() > a.getRawBits())
		return (b);
	return (a);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}
Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_numValue = rhs.getRawBits();
	return (*this);
}

bool	Fixed::operator>(Fixed const &rhs)
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const &rhs)
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const &rhs)
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const &rhs)
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const &rhs)
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const &rhs)
{
	return (this->getRawBits() != rhs.getRawBits());
}

Fixed	Fixed::operator+(Fixed const &rhs)
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &rhs)
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &rhs)
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &rhs)
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed	Fixed::operator++()
{
	++(this->_numValue);
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);

	++(this->_numValue);
	return (tmp);
}

Fixed	Fixed::operator--()
{
	--(this->_numValue);
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);

	--(this->_numValue);
	return (tmp);
}

std::ostream &operator<<(std::ostream &os, Fixed const &rhs)
{
	os << rhs.toFloat();
	return (os);
}
