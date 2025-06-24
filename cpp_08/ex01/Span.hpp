/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 08:49:47 by jbergfel          #+#    #+#             */
/*   Updated: 2025/06/24 14:47:22 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
	private:
		unsigned int _num;
		std::vector<int> _storage;

	public:
		~Span();
		Span();
		Span(unsigned int storage);
		Span(const Span &src);
		Span	operator=(const Span &src);

		void			addNumber(unsigned int n);
		unsigned int	longestSpan();
		unsigned int	shortestSpan();
		void			printStorage();
};

#endif
