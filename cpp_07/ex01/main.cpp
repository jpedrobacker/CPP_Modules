/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 12:48:34 by jbergfel          #+#    #+#             */
/*   Updated: 2025/06/09 13:24:13 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

void	increment(int &x)
{
	x++;
}

void	to_upper_char(char &c)
{
	if (c >= 'a' && c <='z')
		c -= 32;
}

int main()
{
	int intArr[] = {1, 2, 3, 4, 5};
	char charArr[] = {'a', 'b', 'c', 'd', 'e'};

	iter(intArr, 5, increment);
	iter(charArr, 3, to_upper_char);
	for (int x = 0; x < 5; x++)
	{
		std::cout << "post iter int x: " << intArr[x] << std::endl;
		std::cout << "post iter char x: " << charArr[x] << std::endl;
	}
	return (0);
}
