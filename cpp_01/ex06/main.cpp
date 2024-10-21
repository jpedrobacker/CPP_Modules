/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:08:25 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/21 16:54:30 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl	harl;

	if (ac != 2)
		return (std::cout << "Usage: ./harlFilter [DEBUG|INFO|WARNING|ERROR]" << std::endl, 0);
	harl.complain(av[1]);
	return (0);
}
