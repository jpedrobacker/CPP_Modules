/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 08:11:26 by jbergfel          #+#    #+#             */
/*   Updated: 2025/06/24 08:42:11 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T> bool easyFind(T &container, int num)
{
	typename T::iterator tF = std::find(container.begin(), container.end(), num);
	if (tF == container.end())
		return (std::cout << "Value not found" << std::endl, false);
	int i = std::distance(container.begin(), tF);
	std::cout << "Value Found at position: " << i + 1 << std::endl;
	return (true);
}
