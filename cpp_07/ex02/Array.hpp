/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 08:16:53 by jbergfel          #+#    #+#             */
/*   Updated: 2025/06/16 14:24:48 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <typename T> class Array
{
	private:
		T			*_arr;
		std::size_t	_size;

	public:
		~Array();
		Array();
		Array(std::size_t n);
		Array(const Array &src);

		Array	&operator=(const Array &src);
		T		&operator[](std::size_t idx);
		const T &operator[](std::size_t n) const;

		std::size_t	getSize() const;

		class EmptyArray: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Empty array!");
				}
		};

		class OutofBounds: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Out of Bounds!");
				}
		};
};

template <typename T> std::ostream&	operator<<(std::ostream& os, const Array<T>& src)
{
	if (src.getSize() == 0)
		os << "Tried to print empty arry." << std::endl;
	for (std::size_t i = 0; i < src.getSize(); i++)
		os << "array[" << i << "]: " << src._arr[i] << std::endl;
	return (os);
}

# include "Array.tpp"
#endif
