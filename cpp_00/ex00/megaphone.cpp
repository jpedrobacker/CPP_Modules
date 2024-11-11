/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 09:54:09 by jbergfel          #+#    #+#             */
/*   Updated: 2024/11/11 13:06:06 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void	print_to_upper(char *str)
{
	for (int x = 0; str[x]; x++)
		str[x] = std::toupper(str[x]);
	std::cout << str;
}

void	print_upper(char **av)
{
	for (int i = 1; av[i]; i++)
		print_to_upper(av[i]);
	std::cout << std::endl;
}

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else if (ac >= 2)
		print_upper(av);
	return (0);
}
