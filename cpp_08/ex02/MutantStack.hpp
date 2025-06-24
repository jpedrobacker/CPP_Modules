/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 15:11:42 by jbergfel          #+#    #+#             */
/*   Updated: 2025/06/24 18:22:32 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	private:

	public:
		~MutantStack() {}
		MutantStack() {}
		MutantStack(const MutantStack &src): std::stack<T>(src) {}
		MutantStack	&operator=(const MutantStack&src);

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	end();
		iterator	begin();
};

#include "MutantStack.tpp"
#endif

