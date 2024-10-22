/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:27:42 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/22 11:59:33 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
	private:
		int					_numValue;
		static const int	_fb = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &f);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed &operator=(Fixed const & rhs);
};

#endif
