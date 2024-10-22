/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:38:20 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/22 16:38:25 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		int					_numValue;
		static const int	_fb = 8;
	public:
		~Fixed();
		Fixed();
		Fixed(const Fixed &f);
		Fixed(const int i);
		Fixed(const float f);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
		static Fixed		&min(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);
		Fixed				&operator=(Fixed const &rhs);
		bool				operator>(Fixed const &rhs);
		bool				operator<(Fixed const &rhs);
		bool				operator>=(Fixed const &rhs);
		bool				operator<=(Fixed const &rhs);
		bool				operator==(Fixed const &rhs);
		bool				operator!=(Fixed const &rhs);
		Fixed				operator+(Fixed const &rhs);
		Fixed				operator-(Fixed const &rhs);
		Fixed				operator*(Fixed const &rhs);
		Fixed				operator/(Fixed const &rhs);
		Fixed				operator++();
		Fixed				operator++(int);
		Fixed				operator--();
		Fixed				operator--(int);
};

std::ostream &operator<<(std::ostream &os, Fixed const &rhs);

#endif
