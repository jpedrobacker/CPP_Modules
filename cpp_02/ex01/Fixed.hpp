/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:08:25 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/22 12:28:45 by jbergfel         ###   ########.fr       */
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
		Fixed();
		~Fixed();
		Fixed(const Fixed &f);
		Fixed(const int i);
		Fixed(const float f);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		Fixed	&operator=(Fixed const &rhs);
};

std::ostream &operator<<(std::ostream &os, Fixed const &rhs);

#endif
